#include "Game.h"
#include "Player.h"
#include "MyFirstMap.h"


Game::Game(IMap* gameMap) : gameMap(gameMap) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

Game::~Game(){
	for (map<string, IPlayer*>::iterator it = players.begin(); it != players.end(); ++it)
		delete it->second;
}

void Game::addPlayer(string name, IPlayer* player) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	if (players.find(name) == players.end())
		players[name] = (IPlayer*) new Player();
	else
		throw exception("Player already exist");
}

IPlayer* Game::getPlayer(string name) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	return players[name];
}

void Game::erasePlayer(string name) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	if (players.find(name) != players.end())
		players[name] = (IPlayer*) new Player();
	else
		throw exception("Player already exist");
}

void Game::damageUnit(IUnit* target, int damage) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Game::healUnit(IUnit* target, int heal) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Game::addMapObject(LandscapeObject* object) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Game::eraseMapObject(LandscapeObject* object) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Game::increaseResource(string player, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

void Game::dereaseResource(string player, double amount) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;

}

map<string, int>* Game::getAllResourcesAmount() {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	map<string, int> allResources = map<string, int>();
	
	for (auto& player : players)
	{
		map<string, int>* resources = player.second->getResourcesAmount();
		for (auto& resource : *resources)
			allResources[resource.first] += resource.second;
	}

	return &allResources;
}
