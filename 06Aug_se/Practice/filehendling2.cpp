#include<stdio.h>
main()
{
	FILE*fi;
	fi=fopen("stdata.text","w");
	int id;
	char name[10];
	printf("enter your id:");
	scanf("%d",&id);
	printf("enter your name:");
	scanf("%s",&name);
	
	fprintf(fi,"%d",id);
	fprintf(fi,"%s",name);
	
}
