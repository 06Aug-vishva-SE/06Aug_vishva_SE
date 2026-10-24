#include <stdio.h>
int main()
{
    int age;
    float orderValue;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter order value: ");
    scanf("%f", &orderValue);

    if (age >= 18 && orderValue > 500)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}

