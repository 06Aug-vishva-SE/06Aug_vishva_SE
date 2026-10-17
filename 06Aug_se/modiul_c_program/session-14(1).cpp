
#include <stdio.h>

int main()
{
    int choice, total = 0;
    char again;

    do
    {
        printf("\n--- Zomato Menu ---\n");
        printf("1. Burger - Rs.120\n");
        printf("2. Pizza  - Rs.250\n");
        printf("3. Fries  - Rs.90\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Burger selected - Rs.120\n");
            total = total + 120;
        }
        else if(choice == 2)
        {
            printf("Pizza selected - Rs.250\n");
            total = total + 250;
        }
        else if(choice == 3)
        {
            printf("Fries selected - Rs.90\n");
            total = total + 90;
        }
        else
        {
            printf("Invalid choice!\n");
        }

        printf("\nDo you want another food? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\nGrand Total = Rs.%d\n", total);

    return 0;
}



