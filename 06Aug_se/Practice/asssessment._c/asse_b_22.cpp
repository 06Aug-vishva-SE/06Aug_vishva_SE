#include <stdio.h>

struct Day
{
    float hours;
};

int main()
{
    struct Day d[7];
    float total = 0, average;
    int i, j, highest = 0;

    /* Input 7 days */
    for(i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &d[i].hours);

            if(d[i].hours < 0 || d[i].hours > 24)
            {
                printf("Invalid! Enter hours between 0 and 24.\n");
            }

        } while(d[i].hours < 0 || d[i].hours > 24);
    }

    /* Total and highest */
    for(i = 0; i < 7; i++)
    {
        total = total + d[i].hours;

        if(d[i].hours > d[highest].hours)
        {
            highest = i;
        }
    }

    average = total / 7;

    printf("\nWeekly Total = %.2f hours", total);
    printf("\nDaily Average = %.2f hours", average);
    printf("\nHighest Study Hours = Day %d\n", highest + 1);

    /* Visual Bar */
    printf("\nStudy Hours Bar:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        for(j = 0; j < (int)d[i].hours; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
