#ifndef MONEY_H
#define MONEY_H
#include <iostream>
using namespace std;

class Money {
    private:
        int month;
        int day;
    public:
        Money(int m, int d) {
            month = m;
            day = d;
        }
        friend ostream& operator << (ostream& os, const Money& moneyAmount);
};
ostream& operator << (ostream& os, const Money& moneyAmount) {
    os << "$" << moneyAmount.month << "." << moneyAmount.day;
    return os;
}
#endif //MONEY_H




/*
.Money Class
This class must store the its value in an integer that holds cents. It must include

* a constructor that takes dollars and cents (in two different arguments, both integers)
* a default constructor
* overloads of all the relational operators (<,>,<=,>=,!=,==)
* overloads of the math operators + and -
* an overload of the stream operator << to allow values to be printed like this:

[source, cpp]
----
Money m(100,10);
std::cout << m << std::endl;

// this should print the following
$100.33
----

_The external interface of the class must not expose the underlying cents variable directly._
*/
