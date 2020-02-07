#include "Header.h"

void updateMas() {
    thread timer(updateMas_timer); // створення потоку і передача в нього функції
    timer.detach(); // функція, яка зупинить поток при завершенні main
}

void updateMas_timer() {
    int i = 0;
    while (true) {
        cout << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000)); // затримка в 1 секунду
        i++;
    }
}


void createWindow() {
    RenderWindow window(VideoMode(640, 480), "Заголовок"); // cтворення вікна ",Style::Fullscreen)" - повн.екр
    CircleShape mycircle(100.f);
    
    while (window.isOpen()) { // обов'язковий (О) цикл "Поки відкрите вікно"
        Event ev;
        while (window.pollEvent(ev)) {
            if (ev.type = Event::Closed) window.close();
        }   // О подія для закриття вікна
        window.clear();


        window.draw(mycircle);
        window.display();
    }
    
}
