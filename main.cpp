//
//Edited on 3/24/2022
//

#include <iostream>
#include "Money.h"
#include "Account.h"

using namespace std;

int main() {
	//balance set up
	Money m(300, 23);
	Account account(m);
	//Deposits in order $200.00, $300.24, $501.22
	Money a(200,00);
	Money b(300,24);
	Money c(501,22);
	account.makeDeposit(a);
	account.makeDeposit(b);
	account.makeDeposit(c);
	cout << account << endl;
	//Withdrawals in order $300.10, $201.34
	Money d(300,10);
	Money e(201,34);
	account.makeWithDrawal(d);
	account.makeWithDrawal(e);
	cout << account << endl;
	//Code to verify that the relational operators are working correctly
	if(m > a){
		cout << m << " is greater than " << a << endl;
	} else {
		cout << m << " is not greater than " << a << endl;
	}
	
	if(m < a){
		cout << m << " is less than " << a << endl;
	} else {
		cout << m << " is not less than " << a << endl;
	}
	
	if(m == b){
		cout << m << " is equal to " << b << endl;
	} else {
		cout << m << " is not equal to " << b << endl;
	}
	
	if(m != c){
		cout << m << " is not eqaul to " << c << endl;
	} else {
		cout << m << " is not not equal to " << c << endl;
	}
	
	if(m >= d){
		cout << m << " is greater than or equal to " << d << endl;
	} else {
		cout << m << " is not greater than or equal to " << d << endl;
	}
	
	if(m <= c){
		cout << m << " is less than or equal to " <<  c << endl;
	} else {
		cout << m << " is not less than or equal to " << c << endl;
	}

    return 0;
}























