// Create a class Account with private data members and public methods to access and 
// modify them. 
#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    void setDetails(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void showDetails() {
        cout << "Account No: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    Account acc;
    acc.setDetails(12345, 1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.showDetails();
    return 0;
}
