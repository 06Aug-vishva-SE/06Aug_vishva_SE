#include<stdio.h>
#include<string.h>
int main(){
	char fnm[10],lnm[10];
	printf("Enter your first name:");
	scanf("%s",&fnm);
	printf("Enter your last name:");
	scanf("%s",&lnm);
	printf("\nFullname:%s",strcat(fnm,lnm));
}
