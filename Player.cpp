#include "Player.h"
#include "IResource.h"


Player::Player() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

void Player::addUnit(IUnit* unit) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (find(units.begin(), units.end(), unit) == units.end())
		units.push_back(unit);
	else
		throw exception("Unit already belongs to this player");
}

void Player::eraseUnit(IUnit* unit) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (find(units.begin(), units.end(), unit) != units.end())
		units.erase(find(units.begin(), units.end(), unit));
	else
		throw exception("Unit doesn't belong to this player");
}

void Player::increaseResource(string name, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (resources.find(name) != resources.end())
		resources[name]->set(resources[name]->get() + amount);
	else
		throw exception("No resource");
}

void Player::decreaseResource(string name, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

	if (resources.find(name) != resources.end())
		resources[name]->set(resources[name]->get() - amount);
	else
		throw exception("No resource");
}

map<string, int>* Player::getResourcesAmount() {
	map<string, int> resourcesAmounts = map<string, int>();
	for (auto& resource : resources)
		resourcesAmounts[resource.first] += resource.second->get();
	return &resourcesAmounts;
}

Player::~Player() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	for (IUnit* unit : units)
		delete unit;
	for (map<string, IResource*>::iterator it = resources.begin(); it != resources.end(); ++it)
		delete it->second;
}