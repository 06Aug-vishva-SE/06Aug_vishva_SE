#include <stdio.h>

int main()
{
    float price, discount, final;
    int member;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount: ");
    scanf("%f", &discount);

    printf("Enter member (1/0): ");
    scanf("%d", &member);

    final = price - (price * discount / 100);

    if (member == 1)
        final = final - (final * 5 / 100);

    printf("Final Price = %.2f", final);

    return 0;
}
