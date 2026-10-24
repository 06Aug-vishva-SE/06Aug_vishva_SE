
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("insta_followers.txt");

    if (!fin)
    {
        cout << "File not found!";
        return 0;
    }

    string username;
    int count = 0;

    while (getline(fin, username))
    {
        count++;
    }

    fin.close();

    cout << "Total Instagram Followers: " << count << endl;

    return 0;
}

