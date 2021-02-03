#include "Behaviour.h"

Behaviour::Behaviour() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}