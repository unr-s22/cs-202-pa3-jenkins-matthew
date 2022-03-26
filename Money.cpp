#include <iostream>
#include "Money.h"

Money::Money(const int dollars, const int cents):m_dollars(dollars), m_cents(cents) {

}
void Money::printMoney() {
    std::cout << "$" << m_dollars << "." << m_cents << std::endl;
}
float Money::getMoney() {
    return 836.78;
}

ostream& operator << (ostream& os, const Money& moneyAmount) {
    os << "$" << moneyAmount.m_dollars << "." << moneyAmount.m_cents;
    return os;
}
//incude account class
//Money * m
