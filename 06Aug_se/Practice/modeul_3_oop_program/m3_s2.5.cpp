#include <iostream>
#include <string>
using namespace std;

struct Order {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    Order order;

    FoodOrder(Order data) {
        order = data;
    }

    void display() {
        cout << "Order ID: " << order.orderId << endl;
        cout << "Restaurant: " << order.restaurantName << endl;
        cout << "Delivered: " << order.isDelivered << endl;
    }
};

int main() {
    Order data = {101, "Dominos", false};

    FoodOrder foodOrder(data);

    foodOrder.display();

    return 0;
}

