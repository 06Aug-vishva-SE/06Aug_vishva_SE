#include<stdio.h>

void sum(int a, int b)
{
    printf("\nsum = %d", a + b);
}

void sub(int a, int b)
{
    printf("\nSub = %d", a - b);
}

void mul(int a, int b)
{
    printf("\nMul = %d", a * b);
}

void divi(int a, int b)
{
    printf("\nDiv = %d", a / b);
}

int main()
{
    int a, b;

    printf("Enter number 1: ");  // am lkhva thi 1 sathe 4 add,sub,divi,mul thy jay answer to number
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    sum(a, b);
    sub(a, b);
    mul(a, b);
    divi(a, b);

    return 0;
}
