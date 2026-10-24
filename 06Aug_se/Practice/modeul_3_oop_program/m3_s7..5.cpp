
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream createFile("insta_followers.txt");
    createFile << "rahul_123" << endl;
    createFile << "priya_456" << endl;
    createFile << "amit_789" << endl;
    createFile << "neha_101" << endl;
    createFile.close();

    ifstream fin("insta_followers.txt");

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

