#include <iostream>
using namespace std;
class bank
{
	public:
		void interest
		{
			cout<<"normal bank interest!";
		}
};
class hdfc : public bank
{
	public:
		void interest() override
		{
			cout<<"\nhdfc bank intereset rate 7%.";
		}
};


class SBI: public bank{
	public:
		void interest() override{
			cout<<"\nSBI Bank Interest Rate 7%.";
		}
};
main()


{
	/*bank *bn;//base class
	HDFC h;
	SBI s;
	
	bn=&h;//object assigning
	bn->interest();
	
	bn=&s;
	bn->interest();*/
	                                                                                                
	
	//virtual no lakhi to pn chale and it is compile time
	bank bn;
	b.interest();
	
	HDFC h;
	h.interest();
	
	SBI s;
	s.interest();
}



