#include <stdio.h>

int main()
{
    int a[10];
    int i, j, temp;
    int min, max;
    float sum = 0, mean;

    printf("Enter 10 integers:\n");

    /* Input using loop */
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    /* Find minimum and maximum */
    min = a[0];
    max = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    /* Calculate mean */
    mean = sum / 10;

    printf("\nMinimum = %d", min);
    printf("\nMaximum = %d", max);
    printf("\nMean = %.2f", mean);

    /* Sorting in ascending order */
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nSorted Array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    /* Check mean position */
    if(mean == (min + max) / 2.0)
    {
        printf("\n\nMean is exactly midway between minimum and maximum.");
    }
    else if(mean < (min + max) / 2.0)
    {
        printf("\n\nMean is closer to the minimum.");
    }
    else
    {
        printf("\n\nMean is closer to the maximum.");
    }

    return 0;
}
