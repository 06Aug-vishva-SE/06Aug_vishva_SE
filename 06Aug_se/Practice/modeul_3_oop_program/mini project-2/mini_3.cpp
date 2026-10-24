
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayContent()
{
    ifstream file("content_list.txt");
    string line;
    int count = 0;

    if (!file)
    {
        cout << "File not found!" << endl;
        return;
    }

    while (getline(file, line))
    {
        if (line.find("Title: ") == 0)
        {
            count++;
            cout << count << ". " << line.substr(7) << endl;

            if (getline(file, line))
            {
                cout << "   Platform: " << line.substr(9) << endl;
            }

            getline(file, line);
            getline(file, line);
            getline(file, line);
        }
    }

    file.close();
}

int main()
{
    displayContent();
    return 0;
}

