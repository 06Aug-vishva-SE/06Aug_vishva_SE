#include <stdio.h>

int main()
{
    int a, b, c, d, total;
    float per;

    printf("Enter marks of 4 subjects: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    total = a + b + c + d;
    per = total / 4.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if (per >= 70)
        printf("Grade = A+");
    else if (per >= 60)
        printf("Grade = A");
    else if (per >= 50)
        printf("Grade = B");
    else if (per >= 40)
        printf("Grade = C");
    else
        printf("Grade = Fail");

    return 0;
}
