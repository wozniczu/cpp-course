// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    vector<Checking_Account> che_accounts;
    che_accounts.push_back(Checking_Account{});
    che_accounts.push_back(Checking_Account{ "Superman" });
    che_accounts.push_back(Checking_Account{ "Batman", 2000 });
    che_accounts.push_back(Checking_Account{ "Wonderwoman", 5000, 1.5 });

    display(che_accounts);
    deposit(che_accounts, 1000);
    withdraw(che_accounts, 2000);

    vector<Trust_Account> tru_accounts;
    tru_accounts.push_back(Trust_Account{});
    tru_accounts.push_back(Trust_Account{ "Superman" });
    tru_accounts.push_back(Trust_Account{ "Batman", 2000 });
    tru_accounts.push_back(Trust_Account{ "Wonderwoman", 5000, 50 });

    display(tru_accounts);
    deposit(tru_accounts, 1000);
    withdraw(tru_accounts, 2000);
    withdraw(tru_accounts, 50);
    withdraw(tru_accounts, 50);
    withdraw(tru_accounts, 150);
    withdraw(tru_accounts, 250);
    return 0;
}

