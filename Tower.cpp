#include "Tower.h"
#include <iostream>
#include "Coordinate.h"
#include "Attack.h"


Tower::Tower(Coordinate point) : health(1000), position(&point){
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities["Attack"] = new Attack(200, 1, 25);
}

bool Tower::isDead() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	return (bool)health;
}

void Tower::addAbility(string nameOfAbility, IAction* ability) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities[nameOfAbility] = ability;
}

void Tower::eraseAbility(string nameOfAbility) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities.erase(abilities.find(nameOfAbility));
}

void Tower::preformAction(string nameOfAction) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities[nameOfAction]->doAction();
}

void Tower::goTo(Coordinate position) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Tower::attack(IUnit* enemy) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}