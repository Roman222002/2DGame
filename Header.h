
#ifndef Header
#define Header

#include <thread>
#include <chrono>

using namespace std;

void updateMas(); // ��������� ������
void updateMas_timer(); // �������, ��� ���������� � ������



#include <SFML\Graphics.hpp>
const int HEIGHT_MAP = 32;	//����� ����� ������
const int WIDTH_MAP = 40;	//����� ����� ������

void make_map(sf::RenderWindow& win, sf::String TileMap[]); //������� �������� �� ��'��� ����� ������³���, ��� �������� �����

using namespace sf;
#endif