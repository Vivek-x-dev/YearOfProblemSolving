/*
Question: Create a Class for a Bank Account

Design a class BankAccount with:
Data Members
Account holder name
Account number
Balance

*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "After Deposit --> Balance: " << balance << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "After Withdrawal --> Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    void display() {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Vivek", 646, 5000);    //(name, account number, balance)

    acc.display();
    cout << endl;

    acc.deposit(2000);            // Deposit 2000

    acc.withdraw(10000);           // Withdraw 1000

    return 0;
}