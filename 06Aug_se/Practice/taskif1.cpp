#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number 1 to 7: ");
    scanf("%d", &day);

    if(day == 1)
        printf("Mon");
        
    else if(day == 2)
        printf("Tue");
        
    else if(day == 3)
        printf("Wed");
        
    else if(day == 4)
        printf("Thu");
        
    else if(day == 5)
        printf("Fri");
    else if(day == 6)
        printf("Sat");
    else if(day == 7)
        printf("Sun");
    else
        printf("Invalid Day");

    return 0;
}
