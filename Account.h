//
// Edited by Matthew Jenkins on 3/24/2022
//
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
#include<iostream>
#include<stdio.h>
#include<vector>
#include "Money.h"

using namespace std;

class Account {
private:
	int amountDeposits = 0;
	int amountWithDrawals = 0;
	int num = 0;
	string check[100];
	stringstream account;
	vector<Money> money;
	vector<Money> total;
public:
	Account(Money);
	void makeDeposit(Money);
	void makeWithDrawal(Money);
	friend ostream& operator<<(ostream& os, const Account& account);

};

#endif //ACCOUNT_H
