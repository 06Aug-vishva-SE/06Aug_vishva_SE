#include <stdio.h>

int main()
{
    int a[10];
    int i, j, temp;
    int max, min;
    float mean, midpoint;
    float sum = 0;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    mean = sum / 10.0;
    midpoint = (min + max) / 2.0;

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

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nMean = %.2f", mean);

    printf("\nSorted List: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    if(mean == midpoint)
        printf("\nMean is exactly midway between minimum and maximum.");
    else if(mean < midpoint)
        printf("\nMean is closer to the minimum.");
    else
        printf("\nMean is closer to the maximum.");

    return 0;
}
