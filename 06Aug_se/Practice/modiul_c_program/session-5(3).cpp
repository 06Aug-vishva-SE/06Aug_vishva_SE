#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter cart amount: ");
    scanf("%f", &amount);

    if(amount > 2000)
    {
        discount = amount * 20 / 100;
    }
    else
    {
        if(amount > 1000)
        {
            discount = amount * 10 / 100;
        }
        else
        {
            discount = 0;
        }
    }

    finalAmount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final amount to pay = %.2f", finalAmount);

    return 0;
}
