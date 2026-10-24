#include <stdio.h>

int main()
{
    int likes, comments, shares;

    printf("Enter likes: ");
    scanf("%d", &likes);

    printf("Enter comments: ");
    scanf("%d", &comments);

    printf("Enter shares: ");
    scanf("%d", &shares);

    if (likes >= 1000 || (comments > 200 && shares >= 50))
        printf("Trending");
    else
        printf("Not Trending");

    return 0;
}

