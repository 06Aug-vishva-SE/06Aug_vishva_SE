#include <stdio.h>

struct FoodItem
{
    char itemName[30];
    float price;
    float rating;
};

int main()
{
    struct FoodItem food[3] = {
        {"Pizza", 250, 4.5},
        {"Burger", 150, 4.2},
        {"Biryani", 200, 4.7}
    };

    int choice;

    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Biryani\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nItem: %s\n", food[choice - 1].itemName);
    printf("Price: %.2f\n", food[choice - 1].price);
    printf("Rating: %.1f\n", food[choice - 1].rating);

    return 0;
}
