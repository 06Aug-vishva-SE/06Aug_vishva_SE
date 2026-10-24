

// task banking amount, accountopening
//Deposit,  Withdrawal
//statment
//finalamount
//            multiple_in

#include <iostream>
using namespace std;


class AccountOpening
{
public:
    int acno;
    string name, type;

    void accountOpening()
    {
        cout << "Enter Account Number: ";
        cin >> acno;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Type: ";
        cin >> type;
    }
};


class Deposit
{
public:
    int balance;

    void deposit()
    {
        int amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        if (amount >= 2000)
        {
            balance = amount;
            cout << "Deposit Successful";
        }
        else
        {
            balance = 0;
            cout << "Minimum Deposit is 2000";
        }
    }
};


class Withdrawal
{
public:
    int withdrawAmount;

    void withdrawal()
    {
        cout << "\nEnter Withdrawal Amount: ";
        cin >> withdrawAmount;
    }
};


class Statement : public AccountOpening, public Deposit, public Withdrawal
{
public:
    void statement()
    {
        cout << "\n\n----- ACCOUNT STATEMENT -----";
        cout << "\nAccount Number: " << acno;
        cout << "\nAccount Holder Name: " << name;
        cout << "\nAccount Type: " << type;

        if (withdrawAmount <= balance)
        {
            cout << "\nFinal Balance: " << balance - withdrawAmount;
        }
        else
        {
            cout << "\nInsufficient Balance";
        }
    }
};

int main()
{
    Statement s;

    s.accountOpening();
    s.deposit();
    s.withdrawal();
    s.statement();

    return 0;
}
