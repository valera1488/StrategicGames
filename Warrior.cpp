#include <iostream>
#include "Warrior.h"
#include "Move.h"
#include "Coordinate.h"
#include "Attack.h"



Warrior::Warrior(Coordinate position) : health(1000) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	addAbility("Attack", new Attack(200, 1, 25));
	addAbility("Move", new Move());
}

bool Warrior::isDead() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	return (bool)health;
}

void Warrior::addAbility(string nameOfAbility, IAction* ability) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities[nameOfAbility] = ability;
}

void Warrior::eraseAbility(string nameOfAbility) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities.erase(abilities.find(nameOfAbility));
}

void Warrior::preformAction(string nameOfAction) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	abilities[nameOfAction]->doAction();
}

void Warrior::goTo(Coordinate position) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	currentAction.push_back(abilities["Move"]);
}

void Warrior::attack(IUnit* enemy) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	currentAction.push_back(abilities["Attack"]);
}

