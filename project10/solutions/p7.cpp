#include <iostream>
#include <stdexcept>

class OverdraftException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Overdraft Error: Insufficient funds";
    }
};

class BankAccount {
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    
    void deposit(double amount) {
        balance += amount;
    }
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw OverdraftException();
        }
        balance -= amount;
    }
    
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(100);
    try {
        account.withdraw(200);
    } catch (const OverdraftException& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
