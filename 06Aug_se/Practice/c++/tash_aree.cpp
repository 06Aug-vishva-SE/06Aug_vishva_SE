#include<iostream>

using namespace std;
main()
{
	int n,i;
	cout<<"enter number of ids:";
	cin>>n;
	int id[n];                                           //id[0]=23
	
	
	for(i=0;i<n;i++)
	{
		cout<<"enter an id:";
		cin>>id[i];
	}
	for(i=1;i<=n;i++)
    {
        cout<<"id["<<i<<"]="<<id[i]<<endl;
    }
}

            
