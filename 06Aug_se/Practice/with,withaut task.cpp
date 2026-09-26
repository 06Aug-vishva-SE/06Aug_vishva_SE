#include <stdio.h>

void getdata(int id, char name[20])
{
    printf("\nID   : %d", id);
    printf("\nName : %s", name);
}

int main()
{
    int n, i;
    int stid;
    char stnm[20];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter your ID: ");
        scanf("%d", &stid);

        printf("Enter your name: ");
        scanf("%s", stnm);

        getdata(stid, stnm);

        printf("\n----------\n");
    }

    return 0;
}
