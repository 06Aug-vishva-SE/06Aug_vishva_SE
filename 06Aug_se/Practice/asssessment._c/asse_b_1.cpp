#include <stdio.h>

int main()
{
    int i;
    float percentage;

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter Percentage of Student %d: ", i);
        scanf("%f", &percentage);

        if(percentage < 0 || percentage > 100)
        {
            printf("Invalid Percentage!");
        }
        {
            printf("Grade: A - Excellent work!");
        }
        else if(percentage >= 75)
        {
            printf("Grade: B - Good work! Keep pushing.");
        }
        else if(percentage >= 60)
        {
            printf("Grade: C - Good effort! Keep improving.");
        }
        else if(percentage >= 45)
        {
            printf("Grade: D - Keep working hard.");
        }
        else
        {
            printf("Grade: F - Don't give up! Try harder.");
        }
    }

    return 0;
}
