#include "Header.h"

createWindow() {
	clearscr();
}


void updateMas() {
    thread timer(updateMas_timer); // ��������� ������ � �������� � ����� �������
    timer.detach(); // �������, ��� �������� ����� ��� ��������� main
}

void updateMas_timer() {
    int i = 0;
    while (true) {
        cout << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000)); // �������� � 1 �������
        i++;
    }
}

