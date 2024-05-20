#include <iostream>

#include "AccountWithLogger.h"
#include "ConsoleHelperForAccount.h"
#include "ConsoleLogger.h"
#include "FileLogger.h"

using namespace std;

int main() {
    auto helper = new ConsoleHelperForAccount();
    auto last_name = helper->inputLastName();
    auto first_name = helper->inputFirstName();
    auto balance = helper->inputBalance();

    Account* account = new AccountWithLogger(last_name, first_name, balance, new ConsoleLogger());
    // Account* account = new AccountWithLogger(last_name, first_name, balance, new FileLogger("log.txt"));
    helper->printAccount(account);

    auto deposit = helper->inputDeposit();
    account->deposit(deposit);
    helper->printAccount(account);

    return 0;
}
