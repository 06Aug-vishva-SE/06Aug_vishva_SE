#include <stdio.h>

struct Playlist
{
    char title[20];
    char artist[20];
    int duration;
};

int main()
{
    struct Playlist p = {"Kesariya", "Arijit Singh", 268};

    printf("Title: %s\n", p.title);
    printf("Artist: %s\n", p.artist);
    printf("Duration: %d seconds", p.duration);

    return 0;
}
