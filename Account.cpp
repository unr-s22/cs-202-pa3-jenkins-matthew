#include <iostream>
#include "Account.h"
//note that m-> getMoney() and money[x]-> getMoney() are to replaced with just m and money[x], these are there just for testing functionality.
Account::Account(Money * m){
	money.push_back(m);
	currentTotal += m-> getMoney();
}

void Account::makeDeposit(Money * m){
	//For testing
	cout << "Works" << endl;
	cout << m << endl;
	//----------------------
	amountDeposits += 1;
	money.push_back(m);
	check[num] = "d";
	num++;
	currentTotal += m-> getMoney();
}

void Account::makeWithDrawal(Money * m){
	//For testing	
	cout << "Works" << endl;
	cout << m << endl;
	//----------------------
	amountWithDrawals += 1;
	money.push_back(m);
	check[num] = "w";
	num++;
	currentTotal -= m-> getMoney();
}

ostream& operator<<(ostream& output, const Account& account){
	output << "Account Details" << endl;
	output << "--------------------------" << endl;
	output << "Current Balance: " << account.currentTotal << endl;
	output << "--------------------------" << endl;
	output << "Number of Deposits: " << account.amountDeposits << endl;
	output << "--------------------------" << endl;
	int listnum = 1;
	int y = 0;
	for(unsigned int x = 1; x < account.money.size(); x++){	
		if(account.check[y] == "d"){
		output << "(" << listnum << ") ";
		output << account.money[x]-> getMoney() << endl;
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
		output << account.money[x]-> getMoney() << endl;
		listnum++;	
		}
		y++;
	}
	//For Testing
	output << "Vector size: " << account.money.size() << endl;
	//-----------------------
	return output;
};
//This is a test to make sure that we can edit on here.
