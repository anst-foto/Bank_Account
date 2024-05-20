#ifndef BANK_ACCOUNT_CONSOLELOGGER_H
#define BANK_ACCOUNT_CONSOLELOGGER_H

#include <iostream>

#include "ILogger.h"

using namespace std;

class ConsoleLogger : public ILogger {
public:
    ConsoleLogger() {}

    void Log(const string &message) override {
        cout << "[INFO]: " << message << endl;
    }
};


#endif //BANK_ACCOUNT_CONSOLELOGGER_H
