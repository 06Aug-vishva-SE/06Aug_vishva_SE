#include <stdio.h>

int main()
{
    int choice;
    char team[20];

    while(1)
    {
        printf("\n1. View IPL Teams");
        printf("\n2. Add New Team");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nCSK");
            printf("\nMI");
            printf("\nRCB");
        }
        else if(choice == 2)
        {
            printf("\nEnter New Team: ");
            scanf("%s", team);
            printf("Team Added: %s\n", team);
        }
        else if(choice == 3)
        {
            printf("\nThank You!");
            break;
        }
        else
        {
            printf("\nInvalid Choice!");
        }
    }

    return 0;
}
