#include<stdio.h>
struct studinfo
{
	int id;
	char name[20];
	
}st;      //object of structure

int main()
{
	printf("enter your id:");
	scanf("%d", &st.id.&id);
	printf("enter your name:");
	scanf("%s",&st.name);
	printf("\nid:%d",st.id);
	printf("\nname:%s",st.name);
	
}
