#include "Header.h"

class Character {
	int I = 10, J = 10;
	int temp = 0;

	
public: void update() {


	if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A))) && J > 1) {
		TileMap[I][J] = temp;
		temp = TileMap[I][J - 1];
		TileMap[I][J - 1] = 5;
		J--;
		cout << "temp " << temp;
		for (int i = 0; i < HEIGHT_MAP; i++){
			for (int j = 0; j < WIDTH_MAP; j++)
			{
				cout << TileMap[i][j]<<" ";
			}
		cout << endl;
	}
	}

	if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D))) && J < WIDTH_MAP - 2) {
		TileMap[I][J] = temp;
		temp = TileMap[I][J + 1];
		TileMap[I][J + 1] = 5;
		J++;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::W)) && I > 1) {
		TileMap[I][J] = temp;
		temp = TileMap[I - 1][J];
		TileMap[I - 1][J] = 5;
		I--;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) && I < HEIGHT_MAP - 2) {
		TileMap[I][J] = temp;
		temp = TileMap[I + 1][J];
		TileMap[I + 1][J] = 5;
		I++;
	}
	}
};
