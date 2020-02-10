
#include "Header.h"


void updateMas() {
	thread timer(updateMas_timer); // ��������� ������ � �������� � ����� �������
	//timer.detach(); // �������, ��� �������� ����� ��� ��������� main
}

void updateMas_timer() {
	int i = 0;
	while (true) {
		this_thread::sleep_for(chrono::milliseconds(1000)); // �������� � 1 �������
		i++;
	}
}

void loadImages() {
	map_image.loadFromFile("images/tileset.png");	//�������� ���� ��� �����  
	
}
void initPerson() {
	
}
void render_map(RenderWindow& win) {
	Texture map;
	map.loadFromImage(map_image);
	sf::Sprite s_map;
	s_map.setTexture(map);
	TileMap[0][0] = 1;
	for (int i = 0; i < HEIGHT_MAP; i++)
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (TileMap[i][j] == 3) s_map.setTextureRect(IntRect(224, 96, 256, 128));
			else if (TileMap[i][j] == 1) s_map.setTextureRect(IntRect(224, 64, 256, 96));
			else if (TileMap[i][j] == 0) s_map.setTextureRect(IntRect(160, 64, 192, 96));
			else if (TileMap[i][j] == 5) { 
				s_map.setTextureRect(IntRect(64, 128, 96, 160)); 
			}
			s_map.setPosition(j * 32, i * 32); //�������� �� �������� 32�32, ������� �����. 

			win.draw(s_map);//������ ��������� �� �����
		}
}