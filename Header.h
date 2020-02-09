
#ifndef Header
#define Header

#include <thread>
#include <chrono>

using namespace std;

void updateMas(); // створення потоку
void updateMas_timer(); // функція, яка виконується в потоці



#include <SFML\Graphics.hpp>
const int HEIGHT_MAP = 32;	//розмір карти висота
const int WIDTH_MAP = 40;	//розмір карти ширина

void make_map(sf::RenderWindow& win, sf::String TileMap[]); //передаєм вказівник на об'єкт класу РендерВікна, щоб малювати карту

using namespace sf;
#endif