#include<stdio.h>
main()
{
	  int n,i;
	  printf("enter number of students:");
	  scanf("%d",&n);            //accessing
	  int rno[n];
	  for(i=0;i<n;i++)
	  {
	  	printf("enter your roll no:");
	  	scanf("%d",&rno[i]);
	  	
	  }
	  for(i=0;i<n;i++)
	  {
	  	printf("\nroll no:%d",rno[i]);
	  	
	  }
}
