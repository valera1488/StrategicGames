#include "Game.h"
#include "Tower.h"
#include "Warrior.h"
#include "MyFirstMap.h"
#include "PlayerProxy.h"
#include "Coordinate.h"


int main() {
	Game game = Game((IMap*) new MyFirstMap());
	game.addPlayer("player1", new Player());
	Tower tower(Coordinate(5, 5));
	game.getPlayer("player1")->addUnit(&tower);

	game.addPlayer("player2", new Player());
	Warrior warrior(Coordinate(15, 15));
	game.getPlayer("player2")->addUnit(&warrior);

	warrior.preformAction("Attack");
	
}
