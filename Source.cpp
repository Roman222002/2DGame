
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


void createWindow() {
    RenderWindow window(VideoMode(640, 480), "Title"); // c�������� ���� ",Style::Fullscreen)" - ����.���
    CircleShape mycircle(100.f);
    
    while (window.isOpen()) { // ����'������� (�) ���� "���� ������� ����"
        Event ev;
        while (window.pollEvent(ev)) {
            if (ev.type = Event::Closed) window.close();
        }   // � ���� ��� �������� ����
        window.clear();


        window.draw(mycircle);
        window.display();
    }
    
}
