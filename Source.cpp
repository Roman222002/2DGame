
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

int I = 10, J = 10;
char temp = ' ';

void make_map(RenderWindow& win, sf::String TileMap[]) {

	

	Image map_image;								//��'��� ���������� ��� �����
	map_image.loadFromFile("images/tileset.png");	//�������� ���� ��� �����
	Texture map;									//�������� �����
	map.loadFromImage(map_image);					//������� �������� ��������
	Sprite s_map;									//�������� ������ ��� �����
	s_map.setTexture(map);							//������� �������� ��������

	
	

	if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A)))&& J>1) {
		TileMap[I][J] = temp;
		temp = TileMap[I][J-1];
		TileMap[I][J-1] = '5';
		J--;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D)))&& J<WIDTH_MAP-2) {
		TileMap[I][J] = temp;
		temp = TileMap[I][J + 1];
		TileMap[I][J+1] = '5';
		J++;
	}
	
	if ((Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::W))&& I>1) {
		TileMap[I][J] = temp;
		temp = TileMap[I - 1][J];
		TileMap[I-1][J] = '5';
		I--;
	}

	if ((Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S))&& I<HEIGHT_MAP-2) {
		TileMap[I][J] = temp;
		temp = TileMap[I + 1][J];
		TileMap[I + 1][J] = '5';
		I++;
	}

	for (int i = 0; i < HEIGHT_MAP; i++)
		for (int j = 0; j < WIDTH_MAP; j++)
		{
			if (TileMap[i][j] == '0') s_map.setTextureRect(IntRect(224, 96, 256, 128));
			else if (TileMap[i][j] == 's') s_map.setTextureRect(IntRect(224, 64, 256, 96));
			else if (TileMap[i][j] == ' ') s_map.setTextureRect(IntRect(160, 64, 192, 96));
			else if (TileMap[i][j] == '5') { 
				s_map.setTextureRect(IntRect(64, 128, 96, 160)); 
			}

			s_map.setPosition(j * 32, i * 32); //�������� �� �������� 32�32, ������� �����. 

			win.draw(s_map);//������ ��������� �� �����
		}
}