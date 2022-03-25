//
//Edited by Matthew Jenkins on 3/24/2022
//
#include "Account.h"

Account::Account(Money m){
	money.push_back(m);
}

void Account::makeDeposit(Money m){
	amountDeposits += 1;
	check[num] = "d";
	money[0] += m;
	money.push_back(m);
	num++;
}


void Account::makeWithDrawal(Money m){
	amountWithDrawals += 1;
	check[num] = "w";
	money[0] -= m;
	money.push_back(m);
	num++;
}

ostream& operator<<(ostream& output, const Account& account){
	output << "Account Details" << endl;
	output << "--------------------------" << endl;
	output << "Current Balance: " << account.money[0] << endl;
	output << "--------------------------" << endl;
	output << "Number of Deposits: " << account.amountDeposits << endl;
	output << "--------------------------" << endl;
	int listnum = 1;
	int y = 0;
	for(unsigned int x = 1; x < account.money.size(); x++){	
		if(account.check[y] == "d"){
		output << "(" << listnum << ") ";
		output << account.money[x] << endl;
		listnum++;	
		}
		y++;
	}
	output << "--------------------------" << endl;
	output << "Number of Withdrawals: " << account.amountWithDrawals << endl;
	output << "--------------------------" << endl;
	listnum = 1;
	y = 0;
	for(unsigned int x = 1; x < account.money.size(); x++){		
		if(account.check[y] == "w"){
		output << "(" << listnum << ") ";
		output << account.money[x] << endl;
		listnum++;	
		}
		y++;
	}

	return output;
};
