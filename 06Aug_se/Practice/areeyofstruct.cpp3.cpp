#include<stdio.h>
struct address
{
	char city[10];
	int zip;
	
};
struct mydata
{
	int id;
	char name[10];
	struct mydata
	{
		int id
		char name[10];
		struct address ad; //
		
	}my;
	main()
	{
		printf("enter your id:");
		scanf("%d", &my . id);
		printf("enter your name:");
		scanf("%d", &my . name);
         printf("enter your city:");
		scanf("%d", &my . ad.city);
		printf("enter your zip:");
		scanf("%d", &my .ad. zip);		
		
		printf("\nid:%d;:"my.id);
		printf("\nname:%s;:"my.id);
		
	}
}
