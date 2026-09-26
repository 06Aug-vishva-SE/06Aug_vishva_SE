#include <stdio.h>

int main()
{
    char food[50], choice;
    int qty;
    float price, total = 0;

    do
    {
        printf("Enter food product: ");
        scanf("%s", food);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        printf("Enter price: ");
        scanf("%f", &price);

        total = total + (qty * price);

        printf("Do you want to add more? (yes/no): ");
        scanf(" %c", &choice);

    } 
	while(choice == 'y' || choice == 'n');

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}
