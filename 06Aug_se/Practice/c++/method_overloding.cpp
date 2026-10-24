#include <iostream>
using namespace std;

class studinfo
{
public:
    void getdata(int id)
    {
        cout << "\nID: " << id;
    }

    void getdata(string name)
    {
        cout << "\nName: " << name;
    }
};

int main()
{
    studinfo s;

    s.getdata(101);
    s.getdata("vishva");

    return 0;
}
