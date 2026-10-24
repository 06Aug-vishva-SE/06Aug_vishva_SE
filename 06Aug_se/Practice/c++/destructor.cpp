#include <iostream>
using namespace std;
class studinfo
{
	public:
		studinfo(int id,string name)
		{
			cout<<"this is param.constructor.";
			cout<<"\nid:"<<id;
			cout<<"\nname:"<<name;
		}
		~studinfo()
		{
			cout <<"\nnow,memory is fee!";
		}
		};
main()
   {
   	studinfo st(101,"vishva");
		   }		
