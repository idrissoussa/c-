#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    
    Product() {
        name = "inconnu";
        price = 0;
        quantity = 0;
        cout << "product details\n";
    }


    Product(string prodName, double prodPrice, int prodQuantity) {
        name = prodName;
        price = prodPrice;
        quantity = prodQuantity;
        cout << "product details\n";
    }

    Product(const Product &p) {
        name = p.name;
        price = p.price;
        quantity = p.quantity;
        cout << "product details\n";
    }

    void display() {
        cout << "Product: " << name 
             << " | Price: $" << price 
             << " | Quantity: " << quantity << endl;
    }
};

int main() {
   
    Product p1;
    p1.display();

    Product p2("Laptop", 1200.50, 5);
    p2.display();

    Product p3 = p2;
    p3.display();

    return 0;
}



