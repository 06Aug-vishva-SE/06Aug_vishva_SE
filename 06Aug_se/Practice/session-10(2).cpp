#include <stdio.h>
#include <string.h>

int main()
{
    char user1[20], user2[20];

    printf("Enter username 1: ");
    scanf("%s", user1);

    printf("Enter username 2: ");
    scanf("%s", user2);

    if (strcmp(user1, user2) == 0)
        printf("Same");
    else
        printf("Different");

    return 0;
}
