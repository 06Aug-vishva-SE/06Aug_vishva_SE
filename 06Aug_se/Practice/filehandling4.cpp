#include<stdio.h>
main()
{
	FILE*fi;
	fi=fopen("stdata.text","a");
	int id,n,i;
	char name[10];
	printf("enter your id:");
	scanf("%d",&id);
	printf("enter your name:");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Your ID & Name:");
		scanf("%d%s",&id,name);
	
		fprintf(fi,"%d\n",id);
		fprintf(fi,"%s\n",name);
		fprintf(fi,"\n---------------\n");	
	}
	
}
