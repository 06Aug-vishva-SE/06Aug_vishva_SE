#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("Before: %d\n", followerCount);

    printf("Pre-Increment: %d\n", ++followerCount);
    printf("After Pre-Increment: %d\n", followerCount);

    printf("Post-Increment: %d\n", followerCount++);
    printf("After Post-Increment: %d\n", followerCount);

    return 0;
}

