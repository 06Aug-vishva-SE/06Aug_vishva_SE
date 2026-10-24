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
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i;

    i.username = "vishva";
    i.followers = 500;

    i.displayProfile();
    i.postStory("My New Story");

    return 0;
}
