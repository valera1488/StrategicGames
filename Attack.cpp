#include "Attack.h"


Attack::Attack(double range, double cooldown, double damage) {
	this->range = range;
	this->cooldown = cooldown;
	this->damage = damage;
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Attack::doAction() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Attack::stopAction() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}