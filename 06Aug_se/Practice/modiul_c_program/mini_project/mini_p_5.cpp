#include <stdio.h>

int main()
{
    int minutes[7];
    int i, choice;
    int total, highest;
    float average;
    char confirm;
    FILE *fp;

    do
    {
        printf("\n=================================");
        printf("\n     MUSIC LISTENING LOGGER");
        printf("\n=================================");
        printf("\n1. Log New Listening Minutes");
        printf("\n2. View Weekly Summary");
        printf("\n3. Reset Weekly Data");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        
        if(choice == 1)
        {
            printf("\nEnter listening minutes for 7 days:\n");

            for(i = 0; i < 7; i++)
            {
                printf("Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }

            fp = fopen("music_log.txt", "w");

            if(fp == NULL)
            {
                printf("\nFile could not be created!");
            }
            else
            {
                for(i = 0; i < 7; i++)
                {
                    fprintf(fp, "Day %d : %d minutes\n",
                            i + 1, minutes[i]);
                }

                fclose(fp);

                printf("\nData saved successfully!");
            }
        }

        
        else if(choice == 2)
        {
            fp = fopen("music_log.txt", "r");

            if(fp == NULL)
            {
                printf("\nNo saved data found!");
            }
            else
            {
                total = 0;
                highest = 0;

                printf("\n========== WEEKLY SUMMARY ==========\n");

                for(i = 0; i < 7; i++)
                {
                    fscanf(fp, "%*[^:]: %d minutes", &minutes[i]);

                    printf("Day %d : %d minutes\n",
                           i + 1, minutes[i]);

                    total = total + minutes[i];

                    if(minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }
                }

                fclose(fp);

                average = total / 7.0;

                printf("\nTotal   : %d minutes", total);
                printf("\nAverage : %.2f minutes", average);
                printf("\nHighest : %d minutes", highest);
            }
        }

        /* Choice 3 */
        else if(choice == 3)
        {
            printf("\nAre you sure you want to reset? (y/n): ");
            scanf(" %c", &confirm);

            if(confirm == 'y' || confirm == 'Y')
            {
                for(i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                }

                fp = fopen("music_log.txt", "w");

                if(fp != NULL)
                {
                    fclose(fp);
                }

                printf("\nWeekly data reset successfully!");
            }
            else
            {
                printf("\nReset cancelled!");
            }
        }

        
        else if(choice == 4)
        {
            printf("\nThank you for using Music Listening Logger!");
        }

        
        else
        {
            printf("\nInvalid choice!");
        }

    } while(choice != 4);

    return 0;
}
