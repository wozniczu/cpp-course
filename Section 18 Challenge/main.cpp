#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    try {
        Checking_Account acc{ "John",-100 };
    }
    catch(IllegalBalanceException &e) {
        cerr << "IllegalBalanceException" << endl;
    }
    Checking_Account acc2{ "John",0 };
    try {
        acc2.withdraw(100);
    }
    catch (InsufficentFundsException& e) {
        cerr << "InsufficentFundsException" << endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

