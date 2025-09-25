#include <iostream>
#include <string>
using namespace std;

class ecommerce {
public:
    static string name;
    static long phone;

    static void createAccount() {
       
        cout << "--- Account Creation ---\n";
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your phone: ";
        cin >> phone;
    }

    static void product() {
        int choice;
        cout << "\n--- Product Selection ---\n";
        cout << "1. Shirt\n";
        cout << "2. Pant\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "You selected: Shirt\n";
            break;
        case 2:
            cout << "You selected: Pant\n";
            break;
        default:
            cout << "Invalid choice!\n";
            break;
        }
    }
};
string ecommerce::name;
long ecommerce::phone;

int main() {
    ecommerce e;
    e.createAccount();
    e.product();

    return 0;
}


