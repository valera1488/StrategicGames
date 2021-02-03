#include "MyFirstMap.h"
#include "Ground.h"
#include "Coordinate.h"
#include "Water.h"


MyFirstMap::MyFirstMap() {
	char map[10][10] = { 
		{'g','g','g','g','g','g','g','g','g','g'},
		{'g','m','m','m','m','m','m','m','m','g'},
		{'g','m','w','w','w','w','w','w','m','g'},
		{'g','m','w','s','s','s','s','w','m','g'},
		{'g','m','w','s','g','g','s','w','m','g'},
		{'g','m','w','s','g','g','s','w','m','g'},
		{'g','m','w','s','s','s','s','w','m','g'},
		{'g','m','w','w','w','w','w','w','m','g'},
		{'g','m','m','m','m','m','m','m','m','g'},
		{'g','g','g','g','g','g','g','g','g','g'}
	};
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			switch (map[i][j]){
			case 'g':  //земля
				addObj(new Ground("C:\Textures\Ground.png", 0x87a96b, Coordinate(i * 10, j * 10)));
				break;

			case 'm': //грязь
				addObj(new Ground("C:\Textures\Ground.png", 0x964b00, Coordinate(i * 10, j * 10)));
				break;

			case 'w': //вода
				addObj(new Water("C:\Textures\Water.png", 0x78dbe2, Coordinate(i * 10, j * 10)));
				break;

			case 's': //мелководие 
				addObj(new Water("C:\Textures\Water.png", 0xefdbc5, Coordinate(i * 10, j * 10)));
				break;
			}
		}
	
}

void MyFirstMap::addObj(LandscapeObject* object) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	landscape.push_back(object);
}

