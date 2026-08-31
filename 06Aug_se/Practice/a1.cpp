#include <stdio.h>

int main()
{
    int m1, m2, m3, m4;
    int total;
    float percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &m3);

    printf("Enter marks of Subject 4: ");
    scanf("%d", &m4);

    total = m1 + m2 + m3 + m4;
    percentage = total / 4.0;

    printf("\n========== MARKSHEET ==========\n");
    printf("Subject 1 Marks = %d\n", m1);
    printf("Subject 2 Marks = %d\n", m2);
    printf("Subject 3 Marks = %d\n", m3);
    printf("Subject 4 Marks = %d\n", m4);

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 70)
    {
        printf("Grade = A+\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade = A\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade = B\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade = C\n");
    }
    else
    {
        printf("Grade = Fail\n");
    }

    p;

    return 0;
}
