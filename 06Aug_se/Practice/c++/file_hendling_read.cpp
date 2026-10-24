#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file("tops.txt",ios::app);
	string str;
	file>>str;
	
	
	getline(str,file);
	cout<<str;
	
	while (getline(file,str))
	{
		cout<<str<<end1;
	}
