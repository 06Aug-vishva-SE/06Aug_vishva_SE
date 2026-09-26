#include <stdio.h>

struct Book
{
    int id;
    char name[30];
    char author[30];
    float price;
};

void expensive(struct Book b[])
{
    int i, max = 0;

    for(i = 1; i < 5; i++)
    {
        if(b[i].price > b[max].price)
        {
            max = i;
        }
    }

    printf("\n\n=========================================\n");
    printf("          MOST EXPENSIVE BOOK\n");
    printf("=========================================\n");

    printf("ID      : %d\n", b[max].id);
    printf("Name    : %s\n", b[max].name);
    printf("Author  : %s\n", b[max].author);
    printf("Price   : %.2f\n", b[max].price);

    printf("=========================================\n");
}

int main()
{
    struct Book b[5];
    FILE *fp;
    int i;

    printf("\n=========================================\n");
    printf("       LIBRARY BOOK MANAGEMENT\n");
    printf("=========================================\n");

    /* Accept 5 Books */

    for(i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID     : ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name   : ");
        scanf("%s", b[i].name);

        printf("Enter Author Name : ");
        scanf("%s", b[i].author);

        printf("Enter Price       : ");
        scanf("%f", &b[i].price);
    }

    /* Display All Books */

    printf("\n\n=========================================\n");
    printf("             ALL BOOK DETAILS\n");
    printf("=========================================\n");

    printf("%-8s %-20s %-20s %-10s\n",
           "ID", "Book Name", "Author", "Price");

    printf("------------------------------------------------------------\n");

    for(i = 0; i < 5; i++)
    {
        printf("%-8d %-20s %-20s %-10.2f\n",
               b[i].id,
               b[i].name,
               b[i].author,
               b[i].price);
    }

    printf("=========================================\n");

    /* Find Most Expensive Book */

    expensive(b);

    /* Save Data to File */

    fp = fopen("library.txt", "w");

    if(fp == NULL)
    {
        printf("\nFile could not be created!\n");
        return 1;
    }

    fprintf(fp, "===============================================\n");
    fprintf(fp, "           LIBRARY BOOK DETAILS\n");
    fprintf(fp, "===============================================\n");

    fprintf(fp, "%-8s %-20s %-20s %-10s\n",
            "ID", "Book Name", "Author", "Price");

    fprintf(fp, "---------------------------------------------------------------\n");

    for(i = 0; i < 5; i++)
    {
        fprintf(fp, "%-8d %-20s %-20s %-10.2f\n",
                b[i].id,
                b[i].name,
                b[i].author,
                b[i].price);
    }

    fprintf(fp, "===============================================\n");

    fclose(fp);

    printf("\nData saved successfully in library.txt\n");

    /* Read Data from File */

    fp = fopen("library.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    printf("\n\n=========================================\n");
    printf("          DATA FROM LIBRARY.TXT\n");
    printf("=========================================\n");

    while(!feof(fp))
    {
        char line[150];

        if(fgets(line, sizeof(line), fp) != NULL)
        {
            printf("%s", line);
        }
    }

    fclose(fp);

    printf("\n=========================================\n");

    return 0;
}
