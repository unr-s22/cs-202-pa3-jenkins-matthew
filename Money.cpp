#include <iostream>
#include "Money.h"


Money::Money(const int &dollars, const int &cents):m_dollars(dollars), m_cents(cents) {

}

void Money::setMoney(int dollars, int cents) {
    m_dollars = dollars;
    m_cents = cents;
}
void Money::printMoney() {
    std::cout << "$" << m_dollars << "." << m_cents << std::endl;
}
