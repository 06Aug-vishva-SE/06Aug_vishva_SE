#include <iostream>
using namespace std;

class Playlist {
private:
    string songs[3];
    int count;

public:
    Playlist() {
        count = 0;
    }

    void addSong(string songTitle) {
        songs[count] = songTitle;
        count++;
    }

    void displaySongs() {
        cout << "Songs in Playlist:" << endl;

        for (int i = 0; i < count; i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Heeriye");
    p.addSong("Apna Bana Le");

    p.displaySongs();

    return 0;
}

