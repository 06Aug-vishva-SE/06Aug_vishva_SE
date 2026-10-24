
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

class Wishlist
{
private:
    string name;
    float price;

public:
    void input()
    {
        ofstream fout("wishlist.txt");

        for (int i = 1; i <= 3; i++)
        {
            cout << "Enter product name: ";
            getline(cin, name);

            cout << "Enter product price: ";

            while (!(cin >> price) || price < 0)
            {
                cout << "Invalid price! Enter a number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            fout << name << endl;
            fout << price << endl;
        }

        fout.close();
    }

    void display()
    {
        ifstream fin("wishlist.txt");

        cout << "\n--- My Wishlist ---\n";

        while (getline(fin, name))
        {
            if (fin >> price)
            {
                fin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Product: " << name
                     << ", Price: Rs. " << price << endl;
            }
            else
            {
                break;
            }
        }

        fin.close();
    }
};

int main()
{
    Wishlist w;

    w.input();
    w.display();

    return 0;
}

