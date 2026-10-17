
#include <iostream>
using namespace std;


void formatFollowersCount(double count)
{
    
    if (count >= 1000000)
    {
        cout << count / 1000000 << "M";
    }
    
    else if (count >= 1000)
    {
        cout << count / 1000 << "K";
    }
    
    else
    {
        cout << count;
    }
}

int main()
{
    double count;

    cout << "Enter followers: ";
    cin >> count;

    cout << "Followers: ";
    formatFollowersCount(count);

    return 0;
}


