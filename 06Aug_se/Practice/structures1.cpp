#include<stdio.h>
struct studinfo
{
	int id;
	char name[10];
	
	
};
main()
{
	studinfo st;
	printf("enter your id:");
	scanf("%d",&st.id);
	printf("enter your name:");
	scanf("%s",&st.name);
	printf("\nid:%d",st.id);
	printf("\nname:%s",st.name);
}
