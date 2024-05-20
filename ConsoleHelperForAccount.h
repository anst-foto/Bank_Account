#ifndef BANK_ACCOUNT_CONSOLEHELPERFORACCOUNT_H
#define BANK_ACCOUNT_CONSOLEHELPERFORACCOUNT_H

#include <iostream>
#include <string>

#include "Account.h"
#include "ConsoleHelper.h"

using namespace std;

class ConsoleHelperForAccount {
private:
    ConsoleHelper* consoleHelper;
public:
    ConsoleHelperForAccount() {
        consoleHelper = new ConsoleHelper();
    }

    void printAccount(const Account* account) {
        cout << "+++ ACCOUNT +++" << endl;
        cout << "Owner: " << account->getFullName() << endl;
        cout << "Balance: " << account->getBalance() << endl;
        cout << "+++ END ACCOUNT +++" << endl;
        cout << endl;
    }

    string inputFirstName() {
        return consoleHelper->inputString("First name: ");
    }
    string inputLastName() {
        return consoleHelper->inputString("Last name: ");
    }
    double inputBalance() {
        return consoleHelper->inputDouble("Balance: ");
    }
    double inputDeposit() {
        return consoleHelper->inputDouble("Deposit: ");
    }
};


#endif //BANK_ACCOUNT_CONSOLEHELPERFORACCOUNT_H
