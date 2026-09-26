#include<stdio.h>
struct studinfo
{
	int id;
	char name[10];
}st[10];          //Array of structure

int main()
{
	int n,i;
	printf("Enter no of students:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    printf("Enter your ID:");
	    scanf("%d",&st[i].id);
	    printf("Enter your name:");
	    scanf("%s",&st[i].name);		
	}
	for(int i=0;i<n;i++)
	{
		printf("\nID:%d",&st[i].id);
		printf("\nName:%s",&st[i].name);
	}

}
