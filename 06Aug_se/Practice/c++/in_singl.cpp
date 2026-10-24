#include <iostream>
using namespace std;

class father
{
protected:
    int bal, car;

public:
    void getdata()
    {
        cout << "Enter bank balance: ";
        cin >> bal;

        cout << "Enter car value: ";
        cin >> car;
    }
};

class son : public father
{
public:
    void printdata()
    {
        cout << "\nBank Balance: " << bal;
        cout << "\nCar Value: " << car;
    }
};

int main()
{
    son s;

    s.getdata();
    s.printdata();

    return 0;
}
