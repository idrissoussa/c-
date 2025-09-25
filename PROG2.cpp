#include <iostream>
using namespace std;


void showProduct(string name, double price, int quantity = 1, string currency = "EUR") {
    cout << "Product : " << name << endl;
    cout << "unit price : " << price << " " << currency << endl;
    cout << "Quantity : " << quantity << endl;
    cout << "total price : " << price * quantity << " " << currency << endl;
    cout << "-----------------------------" << endl;
}


double calculPriceWithTax(double UnitPrice, int Quantity = 1, double TaxRate = 0.2) {
    double SubTotal = UnitPrice * Quantity;
    double Tax = SubTotal * TaxRate;
    double TotalWithTax = SubTotal + Tax;
    return TotalWithTax;
}

int main() {
    showProduct("mobile", 790.99, 2, "cfa");

    showProduct("USB", 19.99);

    showProduct("Mouse", 25.50, 3);
    
    double TotalWithTax1 = calculPriceWithTax(79.99, 2);
    cout << "total price with tax (20%) for mobile : " << TotalWithTax1 << " cfa" << endl;

    double TotalWithTax2 = calculPriceWithTax(19.99); 
    cout << "total price with tax (20%) for USE: " << TotalWithTax2 << " cfa" << endl;

    return 0;
}

