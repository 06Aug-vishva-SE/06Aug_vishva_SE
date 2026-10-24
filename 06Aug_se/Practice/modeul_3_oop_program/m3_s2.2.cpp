#include <iostream>
using namespace std;

class Playlist {
private:
    bool isPublic;

public:
    Playlist() {
        isPublic = false;
    }

    void togglePublic() {
        isPublic = !isPublic;
    }

    void display() {
        cout << "isPublic: " << boolalpha << isPublic << endl;
    }
};

int main() {
    Playlist p;

    p.togglePublic();
    p.display();

    p.togglePublic();
    p.display();

    return 0;
}

