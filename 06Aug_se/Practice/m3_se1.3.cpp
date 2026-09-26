#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title << " - ";

        if (isDone)
            cout << "DONE";
        else
            cout << "NOT DONE";

        cout << endl;
    }
};

int main()
{
    Task task1("Study C++");

    task1.display();

    task1.markDone();

    task1.display();

    return 0;
}

