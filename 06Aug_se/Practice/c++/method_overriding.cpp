#include <iostream>
using namespace std;

class master
{
public:
    void header(string pname)
    {
        cout << "\nMaster Header Page: " << pname;
    }

    void footer(string pname)
    {
        cout << "\nMaster Footer Page: " << pname;
    }
};

class home : public master
{
public:
    void header(string pname)      
    {
        cout << "\nHome Header Page: " << pname;
    }

    void footer(string pname)
    {
        cout << "\nHome Footer Page: " << pname;
    }
};

class about : public master
{
public:
    void header(string pname)
    {
        cout << "\nAbout Header Page: " << pname;
    }

    void footer(string pname)
    {
        cout << "\nAbout Footer Page: " << pname;
    }
};      

int main()
{
    home h;
    about a;

    h.header("Home");
    h.footer("Home");

    a.header("About");
    a.footer("About");

    return 0;
}
