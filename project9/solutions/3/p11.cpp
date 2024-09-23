#include <iostream>
using namespace std;

class PaymentSystem {
public:
    virtual void processPayment() = 0; // Pure virtual function
};

class CreditCard : public PaymentSystem {
public:
    void processPayment() override {
        cout << "Processing payment through Credit Card" << endl;
    }
};

class PayPal : public PaymentSystem {
public:
    void processPayment() override {
        cout << "Processing payment through PayPal" << endl;
    }
};

int main() {
    PaymentSystem* payment1 = new CreditCard();
    PaymentSystem* payment2 = new PayPal();

    payment1->processPayment();
    payment2->processPayment();

    delete payment1;
    delete payment2;
    return 0;
}
