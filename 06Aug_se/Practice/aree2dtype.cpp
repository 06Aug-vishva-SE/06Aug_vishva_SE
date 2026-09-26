#include<stdio.h>
main()
{
	int n,i;
	printf("enter number of student:");
	scanf("%d",&n);
	int id[n];
	char name[n][10];
	for(i=0;i<n;i++)
	{
		printf("enter your id:");
		scanf("%d",&id[i]);
		printf("enter your name:");
		scanf("%s",&name[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("\nid:%d", id[i]);
		printf("\nname:%s",name[i]);
		printf("\n-----------");
	}
}
