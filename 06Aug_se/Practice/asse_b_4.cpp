#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense e[10];
    int count = 0;
    int choice;
    int i;
    float total;

    do
    {
        printf("\n===== PERSONAL EXPENSE LOGGER =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            if(count < 10)
            {
                printf("Enter category: ");
                scanf("%s", e[count].category);

                printf("Enter amount: ");
                scanf("%f", &e[count].amount);

                count++;

                printf("Expense added successfully!\n");
            }
            else
            {
                printf("Maximum 10 expenses allowed!\n");
            }
        }

        else if(choice == 2)
        {
            total = 0;

            printf("\n----- ALL EXPENSES -----\n");
            printf("Category\tAmount\n");
            printf("------------------------\n");

            for(i = 0; i < count; i++)
            {
                printf("%s\t\t%.2f\n",
                       e[i].category,
                       e[i].amount);

                total = total + e[i].amount;
            }

            printf("------------------------\n");
            printf("Running Total = %.2f\n", total);
        }

        else if(choice == 3)
        {
            FILE *fp;

            fp = fopen("expenses.txt", "w");

            if(fp == NULL)
            {
                printf("File could not be created!\n");
            }
            else
            {
                for(i = 0; i < count; i++)
                {
                    fprintf(fp, "%s,%.2f\n",
                            e[i].category,
                            e[i].amount);
                }

                fclose(fp);

                printf("Expenses saved successfully!\n");
                printf("Program ended.\n");
            }
        }

        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}
