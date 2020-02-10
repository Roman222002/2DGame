
#ifndef Header
#define Header

#include <thread>
#include <chrono>
#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;


const int HEIGHT_MAP = 32;	//����� ����� ������
const int WIDTH_MAP = 40;	//����� ����� ������
 const int TileMap[WIDTH_MAP][HEIGHT_MAP];

static Image map_image;								//��'��� ���������� ��� �����
void updateMas(); // ��������� ������
void updateMas_timer(); // �������, ��� ���������� � ������
void loadImages();
void render_map(sf::RenderWindow& win); //������� �������� �� ��'��� ����� ������³���, ��� �������� �����

#endif