
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("my_fav_songs.txt");
    string song;

    while (getline(fin, song))
    {
        cout << song << endl;
    }

    fin.close();

    return 0;
}

