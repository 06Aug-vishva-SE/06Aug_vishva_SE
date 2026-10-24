#include <iostream>
#include <vector>
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

class TaskList
{
public:
    vector<Task> tasks;

    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index)
    {
        tasks[index].markDone();
    }

    void showTasks()
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;
    int choice;

    list.addTask("Study C++");
    list.addTask("Complete Assignment");
    
    
    list.addTask("Practice Coding");

    cout << "Tasks:" << endl;
    list.showTasks();

    cout << "\nEnter task number to mark DONE: ";
    cin >> choice;

    list.markTaskDone(choice - 1);

    cout << "\nUpdated Tasks:" << endl;
    list.showTasks();

    return 0;
}

