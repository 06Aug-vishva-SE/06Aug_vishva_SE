#include <stdio.h>

int main()
{
    int likes = 100;
    int *ptrLikes = &likes;

    printf("%d\n", likes);
    printf("%p\n", ptrLikes);

    return 0;
}
