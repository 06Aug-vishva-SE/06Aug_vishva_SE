#include <iostream>
using namespace std;

class Ticket
{
public:
    ~Ticket()
    {
        cout << "Saving your ticket..." << endl;
    }
};

int main()
{
    Ticket *t = new Ticket;

    cout << "Ticket booked successfully." << endl;

    delete t;

    return 0;
}
