
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string title[100], platform[100], status[100];
    int views[100];
    int count = 0, choice;
    string line;

    ifstream file("content_list.txt");

    if (!file)
    {
        cout << "File not found!" << endl;
        return 0;
    }

    while (count < 100 && getline(file, line))
    {
        if (line.find("Title: ") == 0)
        {
            title[count] = line.substr(7);

            getline(file, line);
            platform[count] = line.substr(9);

            getline(file, line);
            views[count] = atoi(line.substr(7).c_str());

            getline(file, line);
            status[count] = line.substr(8);

            getline(file, line); // Separator

            count++;
        }
    }

    file.close();

    if (count == 0)
    {
        cout << "No content found!" << endl;
        return 0;
    }

    cout << "\nContent List:\n";

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << title[i] << endl;
        cout << "   Platform: " << platform[i] << endl;
        cout << "   Views: " << views[i] << endl;
        cout << "   Status: " << status[i] << endl;
    }

    cout << "\nEnter content number to update: ";
    cin >> choice;
    cin.ignore();

    if (choice < 1 || choice > count)
    {
        cout << "Invalid number!" << endl;
        return 0;
    }

    cout << "Enter new status: ";
    getline(cin, status[choice - 1]);

    ofstream out("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        out << "Title: " << title[i] << endl;
        out << "Platform: " << platform[i] << endl;
        out << "Views: " << views[i] << endl;
        out << "Status: " << status[i] << endl;
        out << "-------------------" << endl;
    }

    out.close();

    cout << "\nStatus updated successfully!" << endl;

    return 0;
}

