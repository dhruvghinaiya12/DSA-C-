#include <iostream>
using namespace std;


class BankAccount {
protected:
    string accountHolderName;
    int accountNumber;
private:
    double balance;

public:
    BankAccount(string name, int accNum, double bal)
        : accountHolderName(name), accountNumber(accNum), balance(bal) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    virtual void displayAccountInfo() const {
        cout << "\nAccount Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() {} 
};

class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(string name, int accNum, double bal, double rate)
        : BankAccount(name, accNum, bal), interestRate(rate) {}

    void calculateInterest() override {
        double interest = getBalance() * interestRate / 100;
        cout << "Savings Interest: " << interest << endl;
    }
};

class CheckingAccount : public BankAccount {
    double overdraftLimit;

public:
    CheckingAccount(string name, int accNum, double bal, double limit)
        : BankAccount(name, accNum, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount > getBalance() + overdraftLimit)
            cout << "Overdraft limit exceeded!" << endl;
        else {
            BankAccount::withdraw(amount);
        }
    }

    void checkOverdraft() {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount {
    int term;  
    double fixedRate;

public:
    FixedDepositAccount(string name, int accNum, double bal, int t, double rate)
        : BankAccount(name, accNum, bal), term(t), fixedRate(rate) {}

    void calculateInterest() override {
        double interest = getBalance() * fixedRate * term / (100 * 12);
        cout << "Fixed Deposit Interest for " << term << " months: " << interest << endl;
    }
};

int main() {
    BankAccount* account = nullptr;
    int choice;

    while (true) {
        cout << "\n=== Banking System Menu ===\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Display Account Info\n";
        cout << "7. Calculate Interest / Check Overdraft\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                string name;
                int accNum;
                double bal, rate;
                cout << "Enter name, account number, balance, interest rate: ";
                cin >> name >> accNum >> bal >> rate;
                account = new SavingsAccount(name, accNum, bal, rate);
                break;
            }
            case 2: {
                string name;
                int accNum;
                double bal, limit;
                cout << "Enter name, account number, balance, overdraft limit: ";
                cin >> name >> accNum >> bal >> limit;
                account = new CheckingAccount(name, accNum, bal, limit);
                break;
            }
            case 3: {
                string name;
                int accNum, term;
                double bal, rate;
                cout << "Enter name, account number, balance, term (months), interest rate: ";
                cin >> name >> accNum >> bal >> term >> rate;
                account = new FixedDepositAccount(name, accNum, bal, term, rate);
                break;
            }
            case 4: {
                if (account) {
                    double amount;
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    account->deposit(amount);
                } else cout << "Please create an account first!\n";
                break;
            }
            case 5: {
                if (account) {
                    double amount;
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    account->withdraw(amount);
                } else cout << "Please create an account first!\n";
                break;
            }
            case 6: {
                if (account) account->displayAccountInfo();
                else cout << "Please create an account first!\n";
                break;
            }
            case 7: {
                if (account) {
                    account->calculateInterest();

                    CheckingAccount* chk = dynamic_cast<CheckingAccount*>(account);
                    if (chk) chk->checkOverdraft();
                } else cout << "Please create an account first!\n";
                break;
            }
            default:
                cout << "Invalid choice!\n";
        }
    }

    delete account;
    return 0;
}
