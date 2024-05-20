#ifndef BANK_ACCOUNT_ACCOUNTWITHLOGGER_H
#define BANK_ACCOUNT_ACCOUNTWITHLOGGER_H

#include <fstream>
#include <string>

#include "Account.h"

#include "ILogger.h"

using namespace std;

class AccountWithLogger : public Account {
private:
    ILogger *logger;

protected:
    bool initBalance(double balance) override {
        auto result = Account::initBalance(balance);
        if (result) {
            logger->Log("Balance: " + to_string(balance));
        } else {
            logger->Log("Failed to initialize balance for " + Account::getFullName());
        }
        return result;
    }

public:
    AccountWithLogger(const string &firstName, const string &lastName, ILogger *logger) : Account(firstName, lastName) {
        this->logger = logger;

        logger->Log("Account " + Account::getFullName() + " was created");
    }

    AccountWithLogger(const string &firstName, const string &lastName, double balance, ILogger *logger) : Account(firstName, lastName) {
        this->logger = logger;
        this->initBalance(balance);

        logger->Log("Account " + Account::getFullName() + " was created, balance is " + to_string(getBalance()));
    }

    bool deposit(double amount) override {
        auto result = Account::deposit(amount);
        if (result) {
            logger->Log("Deposited " + to_string(amount) + " to " + Account::getFullName());
        } else {
            logger->Log("Failed to deposit " + to_string(amount) + " to " + Account::getFullName());
        }

        return result;
    }

    bool withdraw(double amount) override {
        auto result = Account::withdraw(amount);
        if (result) {
            logger->Log("Withdrawed " + to_string(amount) + " from " + Account::getFullName());
        } else {
            logger->Log("Failed to withdraw " + to_string(amount) + " from " + Account::getFullName());
        }

        return result;
    }
};


#endif //BANK_ACCOUNT_ACCOUNTWITHLOGGER_H
