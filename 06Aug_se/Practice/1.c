#include<stdio.h>

struct Book
{
    int id;
    char name[20], author[20];
    float price;
};

void expensive(struct Book b[])
{
    int i, m=0;
    
    for(i=1;i<5;i++)
        if(b[i].price>b[m].price)
        m=i;

    printf("\nExpensive Book: %s %.2f",b[m].name,b[m].price);
}

int main()
{
	 struct Book b[5];
    FILE *f;
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nBook %d\n",i+1);
        scanf("%d %s %s %f",&b[i].id,b[i].name,
              b[i].author,&b[i].price);
    }
