#include <stdio.h>

int main()
{
    char food[5][20];
    char c1, c2, c3;
    int qty[5], i = 0;
    float price[5], total = 0;

    do
    {
        printf("Enter food : ");
        scanf("%s", &food[i]);

        printf("Enter quantity: ");
        scanf("%d", &qty[i]);

        printf("Enter price: ");
        scanf("%f", &price[i]);

        total = total + (qty[i] * price[i]);

        printf("Do you want to add more? (yes/no): ");
        scanf(" %c%c%c", &c1, &c2, &c3);

        i++;

    } while(c1 == 'y' || c1 == 'Y');

    printf("\nFood \tqty \tPrice\n");

    for(int j = 0; j < i; j++)
    {
        printf("%s\t %d\t  %.2f\n", food[j], qty[j], price[j]);
    }

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}
