#include<stdio.h>
main()
{
	FILE*fi;
	fi=fopen("stdata.text","r");
	char str[100];
  while	(fscanf (fi,"%s",&str)!=EOF)
  {
  	printf("\n%s",str);
  }
	
	 
}
