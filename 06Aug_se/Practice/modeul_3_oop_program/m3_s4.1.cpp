
#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username  : " << username << endl;
        cout << "Followers : " << followers << endl;
    }
};

int main()
{
    SocialMediaUser user;

    user.username = "Amee";
    user.followers = 500;

    user.displayProfile();

    return 0;
}

