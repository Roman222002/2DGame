#include "Header.h"

createWindow() {
	clearscr();
}


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

