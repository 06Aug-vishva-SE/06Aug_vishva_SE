#include <iostream>
#include <string>
using namespace std;

class Product
{
public:

    void searchProduct(string name)
    {
        if (name == "iPhone")
        {
            cout << "\nProduct Name : iPhone";
            cout << "\nCategory     : Mobile";
            cout << "\nBrand        : Apple";
            cout << "\nPrice        : Rs. 50000";
            cout << "\nStorage      : 128 GB";
        }
        else if (name == "Laptop")
        {
            cout << "\nProduct Name : Laptop";
            cout << "\nCategory     : Electronics";
            cout << "\nBrand        : HP";
            cout << "\nPrice        : Rs. 60000";
            cout << "\nRAM          : 8 GB";
        }
        else
        {
            cout << "\nProduct Not Found";
        }
    }

    void searchProduct(string name, string category)
    {
        if (name == "iPhone" && category == "Mobile")
        {
            cout << "\nProduct Name : iPhone";
            cout << "\nCategory     : Mobile";
            cout << "\nBrand        : Apple";
            cout << "\nPrice        : Rs. 50000";
            cout << "\nStorage      : 128 GB";
        }
        else
        {
            cout << "\nProduct Not Found";
        }
    }
};

int main()
{
    Product p;
    string name;

    cout << "Enter Product Name: ";
    cin >> name;

    p.searchProduct(name);

    return 0;
}
