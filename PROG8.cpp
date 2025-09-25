#include <iostream>
using namespace std;

class Product
{
private:
    double price;

public:

    Product() : price(0) {}
    Product(double p) : price(p) {}

    void operator++() {
        price += 1.0;  
    }

    void operator++(int) {
        price += 1.0; 
    }

    Product operator+(Product P) {
        Product temp;
        temp.price = price + P.price;
        return temp;
    }

    Product operator-(Product P) {
        Product temp;
        temp.price = price - P.price;
        return temp;
    }


    friend Product operator+(Product P, double value) {
        Product temp;
        temp.price = P.price+ value;
        return temp;
    }

    friend Product operator+(double value, Product P) {
        Product temp;
        temp.price = value + P.price;
        return temp;
    }

    void show() {
        cout << "price of product: " << price << " EUR" << endl;
    }
};

int main()
{
    Product p1(100), p2(50), p3;

    p3 = p1 + p2;
    p3.show();

    p3 = p1 + 10; 
    p3.show();

    p3 = 5 + p2; 
    p3.show();

    
    ++p1; 
    p1.show();

    p1++;  
    p1.show();

    return 0;
}


