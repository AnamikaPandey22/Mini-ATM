#include <iostream>
using namespace std;

float balance = 1000.00; // initial balance

void showMenu() {
    cout << "\n--- ATM MENU ---\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cout << "Enter your choice"<<"(1, 2, 3, 4)"": ";
}

void checkBalance() {
    cout << "Current Balance: ₹" << balance << endl;
}

void depositMoney() {
    float amount;
    cout << "Enter amount to deposit: ₹";
    cin >> amount;
    if(amount > 0) {
        balance += amount;
        cout << "₹" << amount << " deposited successfully.\n";
    } else {
        cout << "Invalid amount.\n";
    }
}

void withdrawMoney() {
    float amount;
    cout << "Enter amount to withdraw: ₹";
    cin >> amount;
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "₹" << amount << " withdrawn successfully.\n";
    } else {
        cout << "Insufficient balance or invalid amount.\n";
    }
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        // if(cin.fail()){
        //     cin.clear();
        //     cin.ignore(1000,'\n');
        //     choice = -1;
        }

        switch(choice) {
            case 1: checkBalance(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: cout << "Thank you for using the ATM.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 4);

    return 0;
}
