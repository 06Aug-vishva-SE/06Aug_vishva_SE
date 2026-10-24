#include <stdio.h>

int main()
{
    FILE *fp;
    int choice;

    fp = fopen("playlist.txt", "w");

    printf("1. Perfect\n");
    printf("2. Believer\n");
    printf("3. Shape of You\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        fprintf(fp, "Perfect\n");
    else if(choice == 2)
        fprintf(fp, "Believer\n");
    else if(choice == 3)
        fprintf(fp, "Shape of You\n");
    else
        printf("Invalid choice");

    fclose(fp);

    printf("Song added to playlist.txt");

    return 0;
}
