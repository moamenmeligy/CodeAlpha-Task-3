#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal = 0) {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful\n";
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance\n";
        else {
            balance -= amount;
            cout << "Withdrawal successful\n";
        }
    }

    void showAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    cout << "===== Bank Account Management =====\n";
    Account acc(1001, 5000);

    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Account\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            acc.deposit(amount);
            break;
        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            acc.withdraw(amount);
            break;
        case 3:
            acc.showAccount();
            break;
        case 4:
            cout << "Thank you!\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
