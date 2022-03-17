
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
#include<sstream>
#include<iostream>
#include<stdio.h>
#include<vector>
#include "Money.h"

using namespace std;

class Account {
private:
	float currentTotal = 0;
	int amountDeposits = 0;
	int amountWithDrawals = 0;
	int num = 0;
	string check[100];
	stringstream account;
	vector<Money *> money;
public:
	Account(Money *);
	void makeDeposit(Money *);
	void makeWithDrawal(Money *);
	friend ostream& operator<<(ostream& os, const Account& account);
};

#endif //ACCOUNT_H









// The `Account` class will maintain a current balance, and have methods for making deposits and withdrawals. 
//All transactions with the `Account` class must utilize the `Money` class.
/*
.Account Class
The account class have the following methods:

* a constructor that takes an instance of the `Money` class to provide an initial balance 
* `makeDeposit` and `makeWithdrawals`: these functions each have one argument, an instance of the `Money` class
** each deposit and withdrawal must be stored in a corresponding vector of type `std::vector<Money>`
** when a deposit or withdrawal is made, an internal boolean flag should be set indicating that the balance needs to be updated
** when any method requests the current balance, the balance should be recalculated _if_ the flag is true. Otherwise, the balance should just be returned. This approach allows the system to accept multiple deposits and withdrawals and only recalculate the balance when the balance is requested
* an overload of the << operator that prints the following, assuming that the `Account` instance `account` has had three deposits and one withdrawal:

[source, cpp]
----
std::cout << account << std::endl;

// this code should print
Account Details
--------------------------
Current Balance:$100.55
--------------------------
Number of Deposits: 3
--------------------
(1) $100.33
(2) $100.33
(3) $100.33
--------------------------
Number of Withdrawals: 1
--------------------------
(1) $200.44
----

[NOTE]
--
* Since the overload of << in the `Money` class includes a $ in the printout, you do not need one in the `Account` overload.
--
*/
