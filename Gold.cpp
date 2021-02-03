#include "Gold.h"


Gold::Gold(double newAmount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	amount = newAmount;
}

double Gold::get() {
	return amount;
}

void Gold::set(double newAmount) {
	amount = newAmount;
}

string Gold::getName() {
	return "Gold";
}
