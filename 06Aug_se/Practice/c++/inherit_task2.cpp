#include <iostream>
using namespace std;

// 1. Account Opening
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

                                                                      // 2. Deposit
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

                                                        // 3. Withdrawal
class Withdrawal
{
public:
    int withdrawAmount;

    void withdrawal()
    {
        cout << "\nEnter Withdrawal Amount: ";
        cin >> withdrawAmount;

        if (withdrawAmountbalance)
        {
            cout << "Withdrawal Successful";
        }
        else
        {
            cout << "Insufficient Balance";
            withdrawAmount = 0;
        }
    }
};


class Statement : public AccountOpening, public Deposit, public Withdrawal
{
public:
    void statements()
    {
        cout << "\n\n----- ACCOUNT STATEMENT -----";
        cout << "\nAccount Number: " << acno;
        cout << "\nAccount Holder Name: " << name;
        cout << "\nAccount Type: " << type;
        cout << "\nFinal Balance: " << balance - withdrawAmount;
    }
};

int main()
{
    Statement s;

    s.accountOpening();
    s.deposit();
    s.withdrawal();
    s.statements();

    return 0;
}
