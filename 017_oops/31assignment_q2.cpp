//Question2:Create a class BankAccount with private attributes accountNumber and balance.
//Implement public methods deposit(), withdraw(), and get Balance() to manage the account.
#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    cout << "Enter account number: ";
    string accNum;
    cin >> accNum;
    cout << "Enter initial balance: ";  
    double initialBalance;
    cin >> initialBalance;
    BankAccount account(accNum, initialBalance);
    cout << "Current balance: " << account.getBalance() << endl;
    cout << "Enter amount to deposit: ";
    double depositAmount;
    cin >> depositAmount;
    account.deposit(depositAmount);
    cout << "Updated balance: " << account.getBalance() << endl;
    cout << "Enter amount to withdraw: ";       
    double withdrawAmount;
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    cout << "Updated balance: " << account.getBalance() << endl;
    
    return 0;
}