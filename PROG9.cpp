#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string productName;
    double price;

public:
    void setProductDetails(string name, double p) {
        productName = name;
        price = p;
    }

    void showProductDetails() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: ?" << price << endl;
    }
};

class Seller {
protected:
    string sellerName;
    string sellerRating;

public:
    void setSellerDetails(string name, string rating) {
        sellerName = name;
        sellerRating = rating;
    }

    void showSellerDetails() {
        cout << "Seller Name: " << sellerName << endl;
        cout << "Seller Rating: " << sellerRating << endl;
    }
};

class Listing : public Product, public Seller {
public:
    void showListing() {
        cout << "\n--- E-Commerce Listing ---" << endl;
        showProductDetails();
        showSellerDetails();
    }
};

int main() {
    Listing item;

    item.setProductDetails("Wireless Earbuds", 2499.00);
    item.setSellerDetails("TechBazaar", "4.5/5");

    item.showListing();

    return 0;
}


