#include <stdio.h>

int main()
{
    FILE *fp;
    int minutes[7];
    int i;

    printf("===== MUSIC LISTENING LOGGER =====\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter listening minutes for Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    fp = fopen("music_log.txt", "w");         // a file 6augse - prectic- music_loong.text ma che

    if(fp == NULL)
    {
        printf("\nFile could not be created.\n");
        return 1;
    }

    for(i = 0; i < 7; i++)
    {
        fprintf(fp, "Day %d : %d minutes\n", i + 1, minutes[i]);
    }

    fclose(fp);

    printf("\nData saved successfully to music_log.txt\n");

    return 0;
}
