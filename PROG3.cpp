#include <iostream>
#include <string>
using namespace std;

class Client {
private:
    string name;
    double balance;

public:
    Client(string name, double balance) : name(name), balance(balance) {}

    void showBalance() const {
        cout << "Balance of " << name << ": " << balance << " cfa" << endl;
    }

    friend void processOrder(Client& client, double amount);
};

void processOrder(Client& client, double amount) {
    cout << "Processing an order of " << amount << " cfa for " << client.name << endl;
    
    if (client.balance >= amount) {
        client.balance -= amount;
        cout << "Order successful!" << endl;
    } else {
        cout << "Insufficient funds." << endl;
    }
}

int main() {
    Client c1("Alice", 10000); 

    c1.showBalance();

    processOrder(c1, 3000); 
    c1.showBalance();

    processOrder(c1, 8000); 
    c1.showBalance();

    return 0;
}


