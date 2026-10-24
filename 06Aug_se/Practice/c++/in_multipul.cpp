#include <iostream>
using namespace std;

class vishav
{
public:
    int vid;
    string vpro;

    void v_getdata()
    {
        cout << "Enter Vishva ID: ";
        cin >> vid;

        cout << "Enter Vishva Program: ";
        cin >> vpro;
    }
};

class nirev
{
public:
    int nid;
    string npro;

    void n_getdata()
    {
        cout << "Enter Nirev ID: ";
        cin >> nid;

        cout << "Enter Nirev Program: ";
        cin >> npro;
    }
};

class ashok
{
public:
    int aid;
    string apro;

    void a_getdata()
    {
        cout << "Enter Ashok ID: ";
        cin >> aid;

        cout << "Enter Ashok Program: ";
        cin >> apro;
    }
};

// Multiple Inheritance
class tops : public vishav, public nirev, public ashok
{
public:
    void display()
    {
        cout << "\n--- Student Details ---";

        cout << "\nVishva ID: " << vid;
        cout << "\nVishva Program: " << vpro;

        cout << "\nNirev ID: " << nid;
        cout << "\nNirev Program: " << npro;

        cout << "\nAshok ID: " << aid;
        cout << "\nAshok Program: " << apro;
    }
};

int main()
{
    tops t;

    t.v_getdata();
    t.n_getdata();
    t.a_getdata();
    t.printdata();
    t.printdata();

    return 0;
}
