#pragma once

#include "Account.h"

class Trust_Account : public Account {
    friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);
private:
    static constexpr const char* def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_bonus = 0;
protected:
    double bonus;
    int withdraws{0};
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double bonus = def_bonus);
    bool withdraw(double amount);
    bool deposit(double amount);
};


