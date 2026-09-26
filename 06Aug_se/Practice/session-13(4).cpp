#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char song[100];

    fp = fopen("playlist.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    printf("Songs containing 'love':\n");

    while (fgets(song, sizeof(song), fp))
    {
        for (int i = 0; song[i] != '\0'; i++)
        {
            song[i] = tolower(song[i]);
        }

        if (strstr(song, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}
