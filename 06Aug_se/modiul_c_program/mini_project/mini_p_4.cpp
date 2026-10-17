
#include <stdio.h>

int main()
{
    FILE *fp;
    int minutes, total = 0, highest = 0;
    int i;
    float average;

    fp = fopen("music_log.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    for(i = 1; i <= 7; i++)
    {
        fscanf(fp, "%*[^:]: %d minutes", &minutes);

        printf("Day %d : %d minutes\n", i, minutes);

        total = total + minutes;

        if(minutes > highest)
        {
            highest = minutes;
        }
    }

    fclose(fp);

    average = total / 7.0;

    printf("\nTotal : %d minutes", total);
    printf("\nAverage : %.2f minutes", average);
    printf("\nHighest : %d minutes", highest);

    return 0;
}


