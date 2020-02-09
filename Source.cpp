
#include "Header.h"

void updateMas() {
	thread timer(updateMas_timer); // створення потоку і передача в нього функції
	//timer.detach(); // функція, яка зупинить поток при завершенні main
}

void updateMas_timer() {
	int i = 0;
	while (true) {
		this_thread::sleep_for(chrono::milliseconds(1000)); // затримка в 1 секунду
		i++;
	}
}

int I = 5, J = 6;

void make_map(RenderWindow& win, sf::String TileMap[]) {

	

	Image map_image;								//об'єкт зображення для карти
	map_image.loadFromFile("images/tileset.png");	//загружаєм файл для карти
	Texture map;									//текстура карти
	map.loadFromImage(map_image);					//заряжаєм текстуру картінкою
	Sprite s_map;									//створюєм спрайт для карти
	s_map.setTexture(map);							//заливаєм текстуру спрайтом

	

	if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A)))) {
		TileMap[I][J-1] = '5';
		TileMap[I][J] = ' '; 
		J--;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D)))) {
		TileMap[I][J+1] = '5';
		TileMap[I][J] = ' '; 
		J++;
	}
	
	if (Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::W)) {
		TileMap[I-1][J] = '5';
		TileMap[I][J] = ' '; 
		I--;
	}

	if (Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) {
		TileMap[I+1][J] = '5';
		TileMap[I][J] = ' '; 
		I++;
	}

	for (int i = 0; i < HEIGHT_MAP; i++)
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			


			if (TileMap[i][j] == '0') s_map.setTextureRect(IntRect(224, 96, 256, 128));
			else if (TileMap[i][j] == 's') s_map.setTextureRect(IntRect(32, 0, 64, 32));
			else if (TileMap[i][j] == ' ') s_map.setTextureRect(IntRect(160, 64, 192, 96));
			else if (TileMap[i][j] == '5') { 
				s_map.setTextureRect(IntRect(64, 128, 96, 160)); 
			}

			

			s_map.setPosition(j * 32, i * 32); //розбиваєм на квадрати 32х32, роблячи карту. 

			win.draw(s_map);//малюєм квадратіки на екран
		}
}