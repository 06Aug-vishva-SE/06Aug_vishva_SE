#include <stdio.h>

char tasks[5][50];   // Global array

int main()
{
    int i;

    // Add 5 tasks
    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    // Print all tasks
    printf("\nAll Tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}

