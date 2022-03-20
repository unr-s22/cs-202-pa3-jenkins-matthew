#include <iostream>
#include "Money.h"
#include "Account.h"

int main() {

    Money m(100, 10);
    m.printMoney();
    return 0;
}

/*
In your `main` function in `main.cpp`,

* Create an account with a starting balance of $300.23
* Print the account to the terminal using the overloaded << operator (i.e., `std::cout << account << std::endl`)
* Deposit into the account, in order, $200.00, $300.24, and $501.22
* Print the account to the terminal. (Verify that the sum is correct)
* Withdraw, in order, $300.10, $201.34 and again print the account to the terminal.
* Write code to verify that your relational operators are working correctly. This is up to you, however, you must have printouts to the console showing that the operations are correct.
** For example, you might write

[source, c++]
——
Money m(100,10);
Money n(100,10);
if(m > n){
     // print something
} else // etc.
——
*/
