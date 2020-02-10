#include "Header.h"
#include "Character.cpp"



int main() {

    RenderWindow window(VideoMode(1280, 1024), "2d_Game" /*,Style::Fulscreen*/); //рендер вікна


    float CurrentFrame = 0;
    Clock clock; //создаєм змінну часу, тобто робим прив'язку до часу (а не загруженості/мощності процесора).

    
	loadImages();
	Character hero;
    while (window.isOpen()) // обов'язковий цикл
    {
        this_thread::sleep_for(chrono::milliseconds(100)); // затримка в 1 секунду


        Event event;
        while (window.pollEvent(event)) // обов'язкова подія закриття вікна
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
		render_map(window); //малюєм масів
		hero.update();

        window.display();
    }

    return 0;
}