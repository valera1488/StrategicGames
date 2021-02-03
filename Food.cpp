#include "Food.h"


Food::Food(double newAmount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	amount = newAmount;
}

double Food::get() {
	return amount;
}

void Food::set(double newAmount) {
	amount = newAmount;
}

string Food::getName() {
	return "Food";
}
