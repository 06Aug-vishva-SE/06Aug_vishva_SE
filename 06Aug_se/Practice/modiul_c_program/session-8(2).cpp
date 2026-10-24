#include <stdio.h>

void addToCart(char *cart[], int *count, char *product)
{
    cart[*count] = product;
    (*count)++;
}

int main()
{
    char *cart[5];
    int count = 0;

    addToCart(cart, &count, "Charger");

    printf("Cart: %s", cart[0]);

    return 0;
}
