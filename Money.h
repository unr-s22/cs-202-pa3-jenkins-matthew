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
