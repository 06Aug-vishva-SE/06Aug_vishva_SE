
#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
    string name;

public:
    Playlist(string n)
    {
        name = n;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");
        file << name;
        file.close();

        cout << "Playlist saved successfully." << endl;
    }
};

int main()
{
    Playlist p("My Playlist");

    cout << "Playlist created." << endl;

    return 0;
}

