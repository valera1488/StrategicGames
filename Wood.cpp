#include "Wood.h"


Wood::Wood(double newAmount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	amount = newAmount;
}

double Wood::get() {
	return amount;
}

void Wood::set(double newAmount) {
	amount = newAmount;
}

string Wood::getName() {
	return "Wood";
}
