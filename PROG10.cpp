#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string productName;
    double price;

public:
    void setProduct(string name, double p) {
        productName = name;
        price = p;
    }

    void showProduct() {
        cout << "Produit: " << productName << "\nPrix: " << price << " €" << endl;
    }
};

class Order : public Product {
protected:
    int quantity;
    string customerName;

public:
    void setOrder(string customer, int qty) {
        customerName = customer;
        quantity = qty;
    }

    void showOrder() {
        showProduct();
        cout << "Client: " << customerName << "\nQuantité: " << quantity << endl;
    }
};

class Invoice : public Order {
private:
    double totalAmount;

public:
    void generateInvoice() {
        totalAmount = price * quantity;
    }

    void showInvoice() {
        showOrder();
        cout << "Montant total: " << totalAmount << " €" << endl;
    }
};
e
int main() {
    Invoice inv;
    inv.setProduct("Casque Bluetooth", 59.99);
    inv.setOrder("Alice Dupont", 2);
    inv.generateInvoice();
    inv.showInvoice();

    return 0;
}


