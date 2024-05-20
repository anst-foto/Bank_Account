#ifndef BANK_ACCOUNT_FILELOGGER_H
#define BANK_ACCOUNT_FILELOGGER_H

#include <fstream>

#include "ILogger.h"

using namespace std;

class FileLogger : public ILogger {
private:
    ofstream file;
public:
    FileLogger(const string &fileName) {
        file.open(fileName, ios::app);
    }
    ~FileLogger() {
        file.close();
    }

    void Log(const string &message) override {
        file << message << endl;
    }
};


#endif //BANK_ACCOUNT_FILELOGGER_H
