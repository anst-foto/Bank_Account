#ifndef BANK_ACCOUNT_CONSOLEHELPER_H
#define BANK_ACCOUNT_CONSOLEHELPER_H

#include <iostream>
#include <string>

using namespace std;

class ConsoleHelper {
public:
    ConsoleHelper() {}

    string inputString(const string& message) {
        cout << message;
        string input;
        getline(cin, input);
        return input;
    }

    double inputDouble(const string& message) {
        cout << message;
        double input;
        cin >> input;
        return input;
    }
};


#endif //BANK_ACCOUNT_CONSOLEHELPER_H
