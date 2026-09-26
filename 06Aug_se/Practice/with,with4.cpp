#include <stdio.h>

int getdata()
{
    int id, a, b;

   // printf("Enter id: ");
   // scanf("%d", &id);

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nID = %d", id);
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return a,b;
}

void getid()
{
    int x;

    x = getdata();

    printf("\nAnswer ID = %d", x);
}

int main()
{
    getid();

    return 0;
}
