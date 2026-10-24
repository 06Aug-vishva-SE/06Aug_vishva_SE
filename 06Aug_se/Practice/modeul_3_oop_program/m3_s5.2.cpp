#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Instagram: Content uploaded as a photo or story." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "YouTube: Content uploaded as a video." << endl;
    }
};

int main()
{
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();

    return 0;
}
