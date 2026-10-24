#include <stdio.h>

char tasks[5][50];
int status[5] = {0, 0, 0, 0, 0};

void markTaskDone(int index)
{
    status[index] = 1;
}

int main()
{
    int i, choice;

    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    printf("\nWhich task do you want to mark DONE? ");
    scanf("%d", &choice);

    markTaskDone(choice - 1);

    printf("\nUpdated Tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. %s", i + 1, tasks[i]);

        if (status[i] == 1)
            printf(" - DONE");

        printf("\n");
    }

    return 0;
}

