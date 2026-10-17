#include <stdio.h>

int main()
{
    int choice;

    printf("===== MUSIC LISTENING LOGGER =====\n");
    printf("1. Log New Listening Minutes\n");
    printf("2. View Weekly Summary\n");
    printf("3. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\nYour choice is: %d", choice);

    return 0;
}
