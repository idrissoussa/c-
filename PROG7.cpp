#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int stock;

public:
    Product(string n, double p, int s){
	     name=n;
		 price=p;
		 stock=s;
	}

    void display() const {
        cout << "Product: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Stock: " << stock << " units\n" << endl;
    }

    Product& operator++() {
        ++stock;
        return *this;
    }

    Product& operator--() {
        if (stock > 0) --stock;
        return *this;
    }

    Product operator-() const {
        return Product(name, price * 0.9, stock);
    }
};

int main() {
    Product p1("Smartwatch", 149.99, 20);
    cout << " product:\n";
    p1.display();
    ++p1; 
    --p1; 
    cout << " after stock update:\n";
    p1.display();
    Product discounted = -p1; 
    cout << "discount:\n";
    discounted.display();

    return 0;
}


