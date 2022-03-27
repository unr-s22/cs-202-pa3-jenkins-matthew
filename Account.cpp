//
//Edited by Matthew Jenkins on 3/24/2022
//
#include "Account.h"

Account::Account(Money m){
	money.push_back(m);
}

void Account::makeDeposit(Money m){
	amountDeposits += 1;
	money[0] += m;
	money.push_back(m);
	numd++;
	deposits << "(" << numd << ") ";
	deposits << m << endl;
}


void Account::makeWithDrawal(Money m){
	amountWithDrawals += 1;
	money[0] -= m;
	money.push_back(m);
	numw++;
	withdrawals << "(" << numw << ")";
	withdrawals << m << endl;
}

ostream& operator<<(ostream& output, const Account& account){
	output << "Account Details" << endl;
	output << "--------------------------" << endl;
	output << "Current Balance: " << account.money[0] << endl;
	output << "--------------------------" << endl;
	output << "Number of Deposits: " << account.amountDeposits << endl;
	output << "--------------------------" << endl;
	output << account.deposits.str();
	output << "--------------------------" << endl;
	output << "Number of Withdrawals: " << account.amountWithDrawals << endl;
	output << "--------------------------" << endl;
	output << account.withdrawals.str();

	return output;
};






















