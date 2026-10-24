#include <stdio.h>

struct Time
{
    int hour;
    int min;
};

struct MovieShow
{
    char movie[20];
    int screen;
    struct Time time;
};

int main()
{
    struct MovieShow m = {"Pushpa", 2, {7, 30}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           m.movie, m.screen, m.time.hour, m.time.min);

    return 0;
}
