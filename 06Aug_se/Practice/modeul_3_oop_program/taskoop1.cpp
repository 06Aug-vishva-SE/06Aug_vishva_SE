
#include <iostream>
using namespace std;

class stud
{
    int id;
    string name;

public:
    void getdata(int id,string name)
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "\nID: " << id;
        cout << "\nName: " << name;
    }
};

int main()
{
    stud st;
    int stid;
    string stnm;
    cout<<"enter id:";
    cin>>stid;
    cout<<"enter name:";
    cin>>stnm;
    st.getdata(stid,stnm);

    
}
