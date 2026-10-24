#include <stdio.h>

float average(int arr[])
{
    int sum = 0;

    for(int i = 0; i < 7; i++)
    {
        sum = sum + arr[i];
    }

    return sum / 7.0;
}

int main()
{
    int orders[7] = {200, 150, 300, 250, 180, 220, 280};

    printf("Average weekly spend = %.2f\n", average(orders));

    return 0;
}
