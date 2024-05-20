#ifndef BANK_ACCOUNT_ACCOUNT_H
#define BANK_ACCOUNT_ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
    string first_name;
    string last_name;
    double balance;

protected:
    virtual bool initBalance(double balance) {
        if (balance < 0) {
            this->balance = 0;
            return false;
        }
        this->balance = balance;
        return true;
    }

public:
    Account(const string &firstName, const string &lastName) : first_name(firstName), last_name(lastName) {
        balance = 0;
    }

    Account(const string &firstName, const string &lastName, double balance) : first_name(firstName),
                                                                               last_name(lastName) {
        initBalance(balance);
    }

    const string &getFirstName() const {
        return first_name;
    }

    const string &getLastName() const {
        return last_name;
    }

    string getFullName() const {
        return last_name + " " + first_name;
    }

    double getBalance() const {
        return balance;
    }

    virtual bool deposit(double amount) {
        if (amount < 0) {
            return false;
        }
        balance += amount;
        return true;
    }

    virtual bool withdraw(double amount) {
        if (amount < 0) {
            return false;
        }
        if (balance - amount < 0) {
            return false;
        }
        balance -= amount;
        return true;
    }
};


#endif //BANK_ACCOUNT_ACCOUNT_H
