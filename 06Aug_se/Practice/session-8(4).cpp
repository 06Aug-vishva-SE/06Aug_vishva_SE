#include <stdio.h>

char* formatPrice(int price)
{
    static char p[20];
    sprintf(p, "%d", price);
    return p;
}

int main()
{
    printf("%s\n", formatPrice(1599));
    printf("%s\n", formatPrice(999));
    printf("%s\n", formatPrice(2499));

    return 0;
}
