#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Пополнение: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Снятие: " << amount << endl;
        }
        else {
            cout << "Недостаточно средств" << endl;
        }
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(double rate) : interestRate(rate) {}

    void withdraw(double amount) override {
        const double withdrawalFee = 1.0;
        if (balance >= amount + withdrawalFee) {
            balance -= (amount + withdrawalFee);
            cout << "Снятие: " << amount << " + " << withdrawalFee << " комиссия" << endl;
        }
        else {
            cout << "Недостаточно средств" << endl;
        }
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(double limit) : overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            cout << "Снятие: " << amount << endl;
        }
        else {
            cout << "Превышен лимит овердрафта" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    BankAccount* savings = new SavingsAccount(0.02);
    BankAccount* checking = new CheckingAccount(100);

    savings->deposit(1000);
    checking->deposit(500);

    savings->withdraw(200);
    checking->withdraw(600);

    delete savings;
    delete checking;

    return 0;
}
