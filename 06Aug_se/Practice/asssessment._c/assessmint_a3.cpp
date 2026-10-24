#include <iostream>
using namespace std;

int main()
{
    string name, email, phone;
    int choice, resume;

    cout << "===== INTERNSHIP APPLICATION FORM =====" << endl;

    cout << "\nEnter Applicant Name: ";
    cin >> name;

    cout << "Enter Email: ";
    cin >> email;

    cout << "Enter Phone: ";
    cin >> phone;

    cout << "\nPreferred Domain:" << endl;
    cout << "1. Web" << endl;
    cout << "2. Data" << endl;
    cout << "3. Mobile" << endl;
    cout << "4. AI" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "\nResume uploaded? (1 = Yes, 0 = No): ";
    cin >> resume;

    if(resume == 1)
    {
        cout << "\nApplication Submitted Successfully!" << endl;
    }
    else
    {
        cout << "\nPlease upload your resume." << endl;
    }

    return 0;
}
