#include<iostream>
#include<string>

using namespace std;

class Product {
private:
    string name;
    int id;
    float price;

public:
    void inputProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Product Price: ";
        cin >> price;
    }

    void showProduct() {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }

    float getPrice() {
        return price;
    }
};
class customer{
	private:
	string name;
	public:
	customer(){
		cout<<"enter your name:";
		getline(cin, name);
	}
	string getName(){
		return name;
	}	
};

class Order {
public:
    int orderId;
    Product product;
    int quantity;

    void placeOrder() {
        cout << "\n--- Enter Order Details ---\n";
        cout << "Enter Order ID: ";
        cin >> orderId;
        product.inputProduct();
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void showOrder() {
        cout << "\n=== Order Summary ===\n";
        cout << "Order ID: " << orderId << endl;
        product.showProduct();
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << product.getPrice() * quantity << endl;
    }
};
int main() {
    Order order;
    int choice;

    do {
        cout << "\n====== E-Commerce Menu ======";
        cout << "\n1. Place an Order";
        cout << "\n2. Show Order Details";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                order.placeOrder();
                break;
            case 2:
                order.showOrder();
                break;
            case 3:
                cout << "Thank you for shopping with us!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}

		

