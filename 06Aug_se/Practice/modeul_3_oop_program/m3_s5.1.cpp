#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    // Method 1: Only amount
    void processPayment(double amount)
    {
        cout << "Amount only version called" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    // Method 2: Amount and coupon code
    void processPayment(double amount, string couponCode)
    {
        cout << "Amount and Coupon version called" << endl;
        cout << "Coupon Code: " << couponCode << endl;

        double finalAmount = amount - 100;

        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);

    cout << endl;

    p.processPayment(1000, "SAVE100");

    return 0;
}
