#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    float price, rating;

    Product(string n, float p, float r) {
        productName = n;
        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    int choice;

    cout << "1. Display Product" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    Product p("Mobile", 15000, 4.5);

    if (choice == 1) {
        p.displayInfo();
    }

    return 0;
}

