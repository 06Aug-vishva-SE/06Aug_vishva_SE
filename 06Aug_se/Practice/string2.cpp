#include<stdio.h>
int main(){
	char str[10];
	int n;
	printf("Enter any string:");
	scanf("%s",&str);
	printf("\nString:%s",str);
	n=strlen(str);
	printf("\nTotal char:%d",n);
}
