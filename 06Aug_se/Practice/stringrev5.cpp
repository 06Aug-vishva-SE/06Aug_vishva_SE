#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("Enter any string:");
	scanf("%s",&str);
	printf("\nOriginal string:%s",str);
	printf("\nReverse string:%s",strrev(str));

}
