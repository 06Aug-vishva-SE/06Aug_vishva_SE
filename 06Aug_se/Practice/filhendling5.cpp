#include<stdio.h>
main()
{
	FILE*fi;
	fi=fopen("stdata.text","r");
	char str[100];
	fscanf (fi,"%s",&str);
	printf("%s",str);
	 
}
