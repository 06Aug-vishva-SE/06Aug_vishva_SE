#include <stdio.h>

void increaseByValue(int n)
{
    n = n + 1000;
}

void increaseByReference(int *n)
{
    *n = *n + 1000;
}

int main()
{
    int followers = 5000;

    increaseByValue(followers);
    printf("Value: %d\n", followers);

    increaseByReference(&followers);
    printf("Reference: %d", followers);

    return 0;
}
