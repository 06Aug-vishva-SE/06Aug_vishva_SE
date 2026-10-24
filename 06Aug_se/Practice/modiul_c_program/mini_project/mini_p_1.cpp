#include <stdio.h>

int main()
{
    int music[7];
    int i;

    printf("===== Music Listening Logger =====\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter music listening minutes for day %d: ", i + 1);
        scanf("%d", &music[i]);
    }

    printf("\n===== Weekly Music Listening =====\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d : %d minutes\n", i + 1, music[i]);
    }

    return 0;
}
