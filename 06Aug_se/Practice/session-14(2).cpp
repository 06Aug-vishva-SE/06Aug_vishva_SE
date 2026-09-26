
#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}



