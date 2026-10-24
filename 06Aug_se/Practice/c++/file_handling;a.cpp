
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    FILE *file;
    int id, n, i;
    char name[20];

    file = fopen("temp.txt", "w");

    cout << "Enter number of students: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;

        fprintf(file, "ID: %d\n", id);
        fprintf(file, "Name: %s\n", name);

        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    fclose(file);

    return 0;
}

