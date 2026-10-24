#include <iostream>
#include <fstream>
using namespace std;

class Content 
{
public:
    string items[10] = {"HTML", "CSS", "Java"};
    int n = 3;

    void display()
	 {
        for (int i = 0; i < n; i++)
            cout << i + 1 << ". " << items[i] << endl;
    }

    void deleteItem(int num)
	 {
        if (num < 1 || num > n)
		 {
            cout << "Invalid number!" << endl;
            return;
        }

        for (int i = num - 1; i < n - 1; i++)
            items[i] = items[i + 1];

        n--;

        ofstream file("content.txt");

        for (int i = 0; i < n; i++)
            file << i + 1 << ". " << items[i] << endl;

        file.close();

        cout << "\nUpdated List:" << endl;
        display();

        cout << "\nList saved in content.txt";
    }
};

int main() 

{
    Content c;
    int num;

    cout << "Content List:" << endl;
    c.display();

    cout << "Enter item number to delete: ";
    cin >> num;

    c.deleteItem(num);

    return 0;
}
