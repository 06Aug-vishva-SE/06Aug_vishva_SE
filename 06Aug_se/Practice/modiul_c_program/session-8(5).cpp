#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
    str[0] = toupper(str[0]);
}

int main()
{
    char product[] = "mobile";
    char username[] = "virat";

    capitalize(product);
    capitalize(username);

    printf("Product: %s\n", product);
    printf("Username: %s", username);

    return 0;
}
