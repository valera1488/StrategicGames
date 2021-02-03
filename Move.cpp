#include "Move.h"


Move::Move() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Move::doAction() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Move::stopAction() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}
