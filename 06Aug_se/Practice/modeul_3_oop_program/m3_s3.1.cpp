#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string name;

    Playlist(string playlistName) {
        name = playlistName;
        cout << "Welcome to " << name << "!" << endl;
    }
};

int main() {
    string name;

    cout << "Enter playlist name: ";
    getline(cin, name);

    Playlist p(name);

    return 0;
}

