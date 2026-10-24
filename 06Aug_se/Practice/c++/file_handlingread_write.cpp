#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file("tops.txt",ios::app);
	int id;
	string name;
	cout<<"enter id:";
	cin>>id;
	cout<<"enter name:";
	cin>>name;
	
	file<<"/nid:"<<id;
	file<<"/nname:"<<name;
	
}
