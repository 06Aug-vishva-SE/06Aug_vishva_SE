
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("my_fav_songs.txt");

    fout << "Kesariya" << endl;
    fout << "Believer" << endl;
    fout << "Perfect" << endl;
    fout << "Chaleya" << endl;
    fout << "Heeriye" << endl;

    fout.close();

    return 0;
}

