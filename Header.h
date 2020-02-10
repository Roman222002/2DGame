
#ifndef Header
#define Header

#include <thread>
#include <chrono>
#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;


const int HEIGHT_MAP = 32;	//розмір карти висота
const int WIDTH_MAP = 40;	//розмір карти ширина
 const int TileMap[WIDTH_MAP][HEIGHT_MAP];

static Image map_image;								//об'єкт зображення для карти
void updateMas(); // створення потоку
void updateMas_timer(); // функція, яка виконується в потоці
void loadImages();
void render_map(sf::RenderWindow& win); //передаєм вказівник на об'єкт класу РендерВікна, щоб малювати карту

#endif