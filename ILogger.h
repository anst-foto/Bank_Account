#ifndef BANK_ACCOUNT_ILOGGER_H
#define BANK_ACCOUNT_ILOGGER_H

#include <string>

using namespace std;

class ILogger {
public:
    virtual void Log(const string& message) = 0;
};


#endif //BANK_ACCOUNT_ILOGGER_H
