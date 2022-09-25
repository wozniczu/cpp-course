#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double bonus)
    : Account{ name, balance }, bonus{ bonus } {
}

bool Trust_Account::withdraw(double amount) {
    if ((balance - (amount >= 0)) && ((0.2 * balance) > amount) && withdraws < 3) {
        balance -= (amount);
        withdraws++;
        return true;
    }
    else
        return false;
}

bool Trust_Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else if(amount > 5000){
        balance += (amount + 50);
        return true;
    }
    else {
        balance += amount;
        return true;
    }
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.bonus << "$]";
    return os;
}
