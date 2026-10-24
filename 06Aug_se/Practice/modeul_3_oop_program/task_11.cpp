
#include <iostream>
using namespace std;

class stud
{
    int id;
    string name;
public:
    void getdata()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "ID: " << id;
        
       cout<<"enter name:";
    	cin>>name;
    	cout<<"name:"<<name ;
    }
};

int main()
{
    stud st;
    st.getdata();

    return 0;
}


