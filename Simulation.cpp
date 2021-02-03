#include <iostream>
#include "Simulation.h"
#include"IResource.h"


Simulation::Simulation() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Simulation::addUnit(IUnit* unit) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (find(units.begin(), units.end(), unit) == units.end())
		units.push_back(unit);
	else
		throw exception("Unit already belongs to this player");
}

void Simulation::eraseUnit(IUnit* unit) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (find(units.begin(), units.end(), unit) != units.end())
		units.erase(find(units.begin(), units.end(), unit));
	else
		throw exception("Unit doesn't belong to this player");
}

void Simulation::increaseResource(string name, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (resources.find(name) != resources.end())
		resources[name]->set(resources[name]->get() + amount);
	else
		throw exception("No resource");
}

void Simulation::decreaseResource(string name, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (resources.find(name) != resources.end())
		resources[name]->set(resources[name]->get() - amount);
	else
		throw exception("No resource");
}