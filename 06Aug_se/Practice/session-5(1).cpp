#include <stdio.h>
int main()
{
    char team[20];

    printf("Enter IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "mumbai") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "gujarat") == 0)
    {
        printf("Go Gujarat Titans!");
    }
    else if (strcmp(team, "kolkata") == 0)
    {
        printf("Go Kolkata Knight Riders!");
    }
    else if (strcmp(team, "rajasthan") == 0)
    {
        printf("Go Rajasthan Royals!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}
