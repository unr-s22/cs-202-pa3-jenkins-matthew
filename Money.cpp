#include <iostream>
#include "Money.h"

Money::Money(const int dollars, const int cents) {
	m_cents = dollars * 100;
	m_cents += cents;
}

Money::Money(const int cents){
	m_cents = cents;
}

ostream& operator << (ostream& os, const Money& moneyAmount) {
    os << "$" << moneyAmount.m_cents * 0.01;
    return os;
}

bool operator< (const Money& m, const Money &n){return m.m_cents < n.m_cents;}
bool operator> (const Money& m, const Money &n){return m.m_cents > n.m_cents;}
bool operator<= (const Money& m, const Money &n){return m.m_cents <= n.m_cents;}
bool operator>= (const Money& m, const Money &n){return m.m_cents >= n.m_cents;}
bool operator== (const Money& m, const Money &n){return m.m_cents == n.m_cents;}
bool operator!= (const Money& m, const Money &n){return m.m_cents != n.m_cents;}
