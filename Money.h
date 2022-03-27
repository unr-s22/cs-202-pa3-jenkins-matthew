#ifndef MONEY_H
#define MONEY_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Money {
    private:
        double m_cents = 0;
    public:
        explicit Money(const int dollars, const int cents);
        explicit Money(const int cents);
	Money& operator +=(const Money& money) {
		this-> m_cents += money.m_cents;
		return *this;	
	}
	
        Money& operator-=(const Money& money) {
            this -> m_cents -= money.m_cents;
            return *this;
        }
        friend ostream& operator << (ostream& os, const Money& money);
        friend bool operator < (const Money& m, const Money& n);
        friend bool operator > (const Money& m, const Money& n);
        friend bool operator <= (const Money& m, const Money& n);
        friend bool operator >= (const Money& m, const Money& n);
        friend bool operator == (const Money& m, const Money& n);
        friend bool operator != (const Money& m, const Money& n);


};

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

/*
 int operator <= (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
        }
        int operator >= (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
        }
        int operator != (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
*/
