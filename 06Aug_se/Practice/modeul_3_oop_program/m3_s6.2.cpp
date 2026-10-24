#include <iostream>
using namespace std;

class InstaStory
{
protected:
    string storyName;
    int storyViews = 5000;
};

class SponsoredStory : public InstaStory
{
public:
    void getData()
    {
        cout << "Enter Story Name: ";
        getline(cin, storyName);
    }

    void display()
    {
        cout << "\n--------------------------------" << endl;
        cout << "        STORY DETAILS           " << endl;
        cout << "--------------------------------" << endl;
        cout << "Story Name  : " << storyName << endl;
        cout << "Story Views : " << storyViews << endl;
        cout << "--------------------------------" << endl;
    }
};

int main()
{
    SponsoredStory s;

    s.getData();
    s.display();

    return 0;
}
