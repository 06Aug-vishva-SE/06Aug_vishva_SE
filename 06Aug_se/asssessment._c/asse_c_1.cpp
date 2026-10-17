#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void weeklyReport(struct StudyLog s[], int n)
{
    int i, j, dots;
    float total, average;

    printf("\n========== WEEKLY REPORT ==========\n");

    for(i = 0; i < n; i++)
    {
        total = 0;

        for(j = 0; j < 7; j++)
        {
            total = total + s[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject : %s\n", s[i].subject);
        printf("Weekly Total  : %.2f hours\n", total);
        printf("Daily Average : %.2f hours\n", average);

        printf("Progress Chart:\n");

        for(j = 0; j < 7; j++)
        {
            dots = (int)s[i].hours[j];

            printf("Day %d : ", j + 1);

            while(dots > 0)
            {
                printf("*");
                dots--;
            }

            printf(" %.2f hours\n", s[i].hours[j]);
        }
    }
}

void saveData(struct StudyLog s[], int n)
{
    FILE *fp;
    int i, j;

    fp = fopen("productivity_log.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created!\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%s", s[i].subject);

        for(j = 0; j < 7; j++)
        {
            fprintf(fp, ",%.2f", s[i].hours[j]);
        }

        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("\nData saved successfully!\n");
}

int main()
{
    struct StudyLog s[3] =
    {
        {"C Programming", {0,0,0,0,0,0,0}},
        {"Java", {0,0,0,0,0,0,0}},
        {"Database", {0,0,0,0,0,0,0}}
    };

    int choice, day, i;

    do
    {
        printf("\n====================================\n");
        printf("     STUDENT PRODUCTIVITY TRACKER\n");
        printf("====================================\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("====================================\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nEnter Day Number (1-7): ");
            scanf("%d", &day);

            if(day >= 1 && day <= 7)
            {
                for(i = 0; i < 3; i++)
                {
                    printf("Enter hours for %s: ", s[i].subject);
                    scanf("%f", &s[i].hours[day - 1]);
                }

                printf("\nStudy hours saved successfully!\n");
            }
            else
            {
                printf("Invalid day!\n");
            }
        }
        else if(choice == 2)
        {
            weeklyReport(s, 3);
        }
        else if(choice == 3)
        {
            saveData(s, 3);
            printf("Thank you!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}
