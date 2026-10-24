
#include <iostream>
using namespace std;

class stud
{
    int id;
    string name;

public:
    void getdata()
    {
    	cout<<"enter id:";
    	cin>>id;
    	cout<<"enter name:";
    	cin>>name;
    	
        id = 10;
        name = "Vishva";

        cout << "\nID: " << id;
        cout << "\nName: " << name;
    }
};

int main()
{
    stud st;
    st.getdata();


}

