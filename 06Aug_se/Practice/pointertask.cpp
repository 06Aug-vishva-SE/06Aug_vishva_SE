#include<stdio.h>

int main()
{
    char name[5][10];
    
    int i;

    printf("Enter 5 student names:\n");

    for(i=0; i<5; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", name[i]);
    }

    printf("\n===== Student Details =====\n");

    for(i=0; i<5; i++)
    {
    

        printf("\nName = %s",name[i]);
        printf("\nAddress = [%d]=%d",i,&name[i] );
        printf("\n----------------------");
    }

    return 0;
}
