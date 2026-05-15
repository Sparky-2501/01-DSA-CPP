//Question2:CreateaclassBankAccountwithprivateattributesaccountNumberandbalance.Implementpublicmethodsdeposit(),withdraw(),andgetBalance()tomanagetheaccount.
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
    
    return 0;
}