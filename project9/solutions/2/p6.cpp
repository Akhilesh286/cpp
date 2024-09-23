#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;
    string accountNumber;

public:
    BankAccount(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    double getBalance() {
        return balance;
    }

    string getAccountNumber() {
        return accountNumber;
    }
};

class SavingsAccount : protected BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string accNum, double bal, double rate)
        : BankAccount(accNum, bal), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Earned: " << interest << endl;
    }
};

int main() {
    SavingsAccount sa("12345", 1000, 5);
    sa.calculateInterest();
    return 0;
}
