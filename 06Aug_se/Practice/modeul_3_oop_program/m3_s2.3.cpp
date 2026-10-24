#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered() {
        isDelivered = true;

        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Order Delivered: " << boolalpha << isDelivered << endl;
    }
};

int main() {
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Pizza Hut";
    order.isDelivered = false;

    order.markDelivered();

    return 0;
}

