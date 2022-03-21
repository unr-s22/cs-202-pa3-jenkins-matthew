#include <iostream>
#include "Money.h"


Money::Money(const int &dollars, const int &cents):m_dollars(dollars), m_cents(cents) {

}

void Money::setMoney(int dollars, int cents) {
    m_dollars = dollars;
    m_cents = cents;
}
ostream& operator << (ostream& os, const Money& money) {
    os<< "$" << m_dollars << "." << m_cents << std::endl;
    return os;
}
