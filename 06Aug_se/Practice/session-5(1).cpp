#include <stdio.h>
#include <string.h>

int main()
{
    char team[20];

    printf("Enter IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mumbai") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "Gujarat") == 0)
    {
        printf("Go Gujarat Titans!");
    }
    else if (strcmp(team, "Kolkata") == 0)
    {
        printf("Go Kolkata Knight Riders!");
    }
    else if (strcmp(team, "Rajasthan") == 0)
    {
        printf("Go Rajasthan Royals!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}
