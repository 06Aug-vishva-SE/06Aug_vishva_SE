#include <stdio.h>

int main()
{
    char food[30];
    int qty, choice;
    float price, total = 0;

    do
    {
        printf("\n--- Food Menu ---\n");

        printf("Enter food name: ");
        scanf("%s", food);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        printf("Enter price: ");
        scanf("%f", &price);

        printf("Total = %.2f\n", qty * price);

        total = total + qty * price;

        printf("\nDo you want to add more?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

    } while(choice == 1);

    printf("\nYour Net Bill = %.2f\n", total);

    return 0;
}

