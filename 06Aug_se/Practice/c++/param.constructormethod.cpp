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
		};
main()
   {
   	studinfo st(101,"vishva");
		   }		
