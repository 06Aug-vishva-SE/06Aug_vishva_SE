
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int id;
    char name[30], mobile[15], city[30];

    void enroll()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Mobile: ";
        cin >> mobile;

        cout << "Enter City: ";
        cin >> city;

        ofstream file("student.txt", ios::app);
        file << id << " " << name << " "
             << mobile << " " << city << endl;
        file.close();

        cout << "Student saved successfully!\n";
    }

    void read()
    {
        ifstream file("student.txt");

        while (file >> id >> name >> mobile >> city)
        {
            cout << "\nID: " << id;
            cout << "\nName: " << name;
            cout << "\nMobile: " << mobile;
            cout << "\nCity: " << city << endl;
        }

        file.close();
    }
};

int main()
{
    Student s;
    int choice, n, i;

    do
    {
        cout << "\n1. Enroll New Students";
        cout << "\n2. Read File";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter number of students: ";
                cin >> n;

                for (i = 0; i < n; i++)
                    s.enroll();
                break;

            case 2:
                s.read();
                break;

            case 3:
                cout << "Exit Successfully!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    }
	 while (choice != 3);

    return 0;
}

