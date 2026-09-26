#include<stdio.h>
#include<string.h>
int main(){
	char pas[10],cpas[10];
	printf("Enter password:");
	scanf("%s",&pas);
	printf("Enter Confirm Password:");
	scanf(%s,&cpas);
	if(strcmpi(pas,cpas)==0){//strcmpi is case insentitive
		printf("Password Matching done!");
	}
	else{
		printf(Error!Try again...);
	}
}
