#include <stdio.h>

int main()
{
    float n1, n2;
    char choice;

    printf("Enter number 1: ");
    scanf("%f", &n1);

    printf("Enter number 2: ");
    scanf("%f", &n2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Addition = %.2f", n1 + n2);
            break;

        case '-':
            printf("Subtraction = %.2f", n1 - n2);
            break;

        case '*':
            printf("Multiplication = %.2f", n1 * n2);
            break;

        case '/':
            printf("Division = %.2f", n1 / n2);
            break;

        default:
            printf("Invalid Operation");
    }

    return 0;
}
