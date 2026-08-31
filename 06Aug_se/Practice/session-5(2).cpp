#include <stdio.h>

int main()
{
    int choice;

    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Try Dosa!");
            break;

        case 2:
            printf("Try Gujarati Thali!");
            break;

        case 3:
            printf("Try Pizza!");
            break;

        case 4:
            printf("Try Samosa!");
            break;

        default:
            printf("Try some fruits!");
    }

    return 0;
}
