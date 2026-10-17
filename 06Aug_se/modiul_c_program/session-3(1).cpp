#include <stdio.h>

        int main()
{
    char productName[] = "Laptop";
    float price = 55000.50;
    double rating = 4.5;

    printf("Product Name: %s (string)\n", productName);
    printf("Price: %.2f (float)\n", price);
    printf("Rating: %.1lf (double)\n", rating);

    return 0;
}

