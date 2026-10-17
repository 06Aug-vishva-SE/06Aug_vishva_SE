#include <stdio.h>
#include <string.h>

int main()
{
    char song[30];

    do
    {
        printf("\nGuess the Bhajan");
        printf("\n1. Achyutam Keshavam");
        printf("\n2. Om Jai Jagdish Hare");
        printf("\n3. Shri Krishna Govind");

        printf("\nEnter bhajan name: ");
        scanf("%s", song);

        if(strcmp(song, "Achyutam") == 0)
        {
            printf("Correct Answer!\n");
            break;
        }
        else if(strcmp(song, "Om") == 0)
        {
            printf("Correct Answer!\n");
            break;
        }
        else if(strcmp(song, "Krishna") == 0)
        {
            printf("Correct Answer!\n");
            break;
        }
        else
        {
            printf("Wrong Answer! Try Again.\n");
        }

    } while(1);

    return 0;
}
