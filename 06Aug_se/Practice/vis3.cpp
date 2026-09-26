#include <stdio.h>

int main()
{
    char food[20];
    char c1, c2, c3;
    int qty;
    float price, total = 0;

    do
    {
        printf("Enter food : ");
        scanf("%s",& food);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        printf("Enter price: ");
        scanf("%f", &price);

        total = total + (qty * price);

        printf("Do you want to add more? (yes/no): ");
        scanf(" %c%c%c", &c1, &c2, &c3);

    } 
	while(c1 == 'y' || c1 == 'Y');

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}
