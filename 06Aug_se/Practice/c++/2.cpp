
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
protected:
    int id;
    char name[50];
    char mobile[15];
    char city[30];

public:
    void getData()
    {
        cout << "\nEnter Student ID: ";
        cin >> id;

        cout << "Enter Student Name: ";
        cin >> ws;
        cin.getline(name, 50);

        cout << "Enter Mobile Number: ";
        cin >> mobile;

        cout << "Enter City: ";
        cin >> ws;
        cin.getline(city, 30);
    }
};

class Enrollment : public Student
{
public:
    void saveData()
    {
        getData();

        ofstream file("students.txt", ios::app);

        if (!file)
        {
            cout << "File Error!" << endl;
            return;
        }

        file << "Student ID: " << id << endl;
        file << "Student Name: " << name << endl;
        file << "Mobile Number: " << mobile << endl;
        file << "City: " << city << endl;
        file << "--------------------------" << endl;

        file.close();

        cout << "\nStudent Enrolled Successfully!" << endl;
    }
};

class Records : public Enrollment
{
public:
    void readData()
    {
        ifstream file("students.txt");
        char ch;

        if (!file)
        {
            cout << "File Not Found!" << endl;
            return;
        }

        cout << "\n====== Student Records ======\n";

        while (file.get(ch))
        {
            cout << ch;
        }

        file.close();
    }
};

int main()
{
    Records r;
    int choice, n;

    do
    {
        cout << "\n\n===== Student Enrollment System =====";
        cout << "\n1. Add Student";
        cout << "\n2. View Student Records";
        cout << "\n3. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Number of Students: ";
                cin >> n;

                for (int i = 1; i <= n; i++)
                {
                    cout << "\n--- Student " << i << " Details ---";
                    r.saveData();
                }
                break;

            case 2:
                r.readData();
                break;

            case 3:
                cout << "\nThank You! Program Ended.";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.";
        }

    } while (choice != 3);

    return 0;
}

