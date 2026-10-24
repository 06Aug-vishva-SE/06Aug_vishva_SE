
#include <iostream>
#include <string>
using namespace std;

class bank
{
    private:
        int pin;

    protected:
        int balance;

    public:
        string name;

        void getdata()
        {
            pin = 1234;
            balance = 5000;
            name = "Vishva";
        }

        void display()
        {
            cout << "Name: " << name << endl;
        }
};

class myaccount : public bank
{
    public:
        void show()
        {
            cout << "Name: " << name << endl;
            cout << "bank Balance: " << balance << endl;
                                                                    //praivet hoi te neam speac n thay// protected hoi te specific hoi te print amukma thay 
            // pin is private, so it cannot be accessed here.
        }
};

int main()
{
    myaccount b;

    b.getdata();
    b.show();

    return 0;
}

