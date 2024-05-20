cmake_minimum_required(VERSION 3.28)
project(Bank_Account)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bank_Account main.cpp
        Account.h
        ConsoleHelperForAccount.h
        ConsoleHelper.h
        AccountWithLogger.h
        ILogger.h
        FileLogger.h
        ConsoleLogger.h)
