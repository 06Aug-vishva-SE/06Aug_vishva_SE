#include <stdio.h>

       int calculateTotal(int itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    int itemPrice = 500;
    int quantity = 3;
    int totalBill;

    totalBill = calculateTotal(itemPrice, quantity);

    printf("Item Price: %d\n", itemPrice);
    printf("Quantity: %d\n", quantity);
    printf("Total Bill: %d\n", totalBill);

    return 0;
}

