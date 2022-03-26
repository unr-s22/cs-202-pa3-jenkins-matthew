#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <vector>
using namespace std;

class Money {
    private:
        const int m_dollars;
        const int m_cents;
        int compare;
    public:
        explicit Money(const int dollars, const int cents);
        void printMoney(); 
        float getMoney();
        friend ostream& operator << (ostream& os, const Money& moneyAmount);
        void read() {
            cin >> compare;
            int operator < (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
        }
        int operator > (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
        }
        int operator == (Money X) {
            if (compare < X.compare)
                return 1;
            else    
                return 0;
        }
        }
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
