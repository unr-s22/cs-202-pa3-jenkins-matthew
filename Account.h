//
// Edited by Matthew Jenkins on 3/24/2022
//
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
	int amountDeposits = 0;
	int amountWithDrawals = 0;
	vector<Money> money;
	stringstream deposits, withdrawals;
public:
	Account(Money);
	void makeDeposit(Money);
	void makeWithDrawal(Money);
	friend ostream& operator<<(ostream& os, const Account& account);

};

#endif //ACCOUNT_H
