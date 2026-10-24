
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string title, platform, status;
    int views, choice;

    do
    {
        cout << "\n1. Add Content";
        cout << "\n2. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "Enter title: ";
            getline(cin, title);

            cout << "Enter platform: ";
            getline(cin, platform);

            cout << "Enter views: ";
            cin >> views;
            cin.ignore();

            cout << "Enter status: ";
            getline(cin, status);

            ofstream file("content_list.txt", ios::app);

            file << "Title: " << title << endl;
            file << "Platform: " << platform << endl;
            file << "Views: " << views << endl;
            file << "Status: " << status << endl;
            file << "-------------------" << endl;

            file.close();

            cout << "Content saved successfully!" << endl;
        }
        else if (choice != 2)
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 2);

    return 0;
}

