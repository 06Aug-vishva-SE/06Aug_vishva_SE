#include<iostream>

using namespace std;
struct studinfo

{
	int id;
	string name, city;
}st[5];
main()
{
	int n,i;
	cout<<"enter number of student:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter id:";
		cin>>st[i].id;
		cout<<"enter name:";
		cin>>st[i].name;
		cout<<"enter city:";
		cin>>st[i].city;
	}
	for (i=0;<n;i++)
	{
		cout<<"\nid:"<<st[i].id;
		cout<<"\nname:"<<st[i].name;
		cout<<"\city:"<<st[i].city;
		
	}
}
