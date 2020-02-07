
#ifndef Header
#define Header

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void updateMas(); // створення потоку
void updateMas_timer(); // функція, яка виконується в потоці



#include <SFML/Graphics.hpp> // підключаєм бібліотеку SFML для роботи з вікнами і графікою
using namespace sf; // теж для SFML
void createWindow();
#endif