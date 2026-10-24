#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username : " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

int main()
{
    YouTuber y;

    y.username = "Amee";
    y.followers = 500;
    y.channelName = "Amee Channel";

    y.displayProfile();
    y.uploadVideo("My First Video");

    return 0;
}
