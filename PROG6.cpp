#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double unitPrice;
    int quantity;

public:
    Product(string n = "", double price = 0.0, int qty = 0){
        name=n; 
		unitPrice=price;
		quantity=qty; 
		}

    double calculateTotal() {
        return unitPrice * quantity;
    }

    double calculateTotal(int additionalQty) {
        return unitPrice * (quantity + additionalQty);
    }

    double calculateTotal(double discountPercent) {
        double discountedPrice = unitPrice * (1 - discountPercent / 100.0);
        return discountedPrice * quantity;
    }

    double calculateTotal(int additionalQty, double discountPercent) {
        double discountedPrice = unitPrice * (1 - discountPercent / 100.0);
        return discountedPrice * (quantity + additionalQty);
    }

    void display() const {
        cout << "Product: " << name << endl;
        cout << "Unit Price: $" << unitPrice << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Product p("Laptop", 1000.0, 2);

    p.display();

    cout << "Total (no params): $" << p.calculateTotal() << endl;
    cout << "Total (+1 qty): $" << p.calculateTotal(1) << endl;
    cout << "Total (10% discount): $" << p.calculateTotal(10.0) << endl;
    cout << "Total (+2 qty, 15% discount): $" << p.calculateTotal(2, 15.0) << endl;

    return 0;
}


