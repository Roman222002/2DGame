#include "Header.h"
#include "Character.cpp"



int main() {

    RenderWindow window(VideoMode(1280, 1024), "2d_Game" /*,Style::Fulscreen*/); //������ ����


    float CurrentFrame = 0;
    Clock clock; //������ ����� ����, ����� ����� ����'���� �� ���� (� �� �����������/������� ���������).

    
	loadImages();
	Character hero;
    while (window.isOpen()) // ����'������� ����
    {
        this_thread::sleep_for(chrono::milliseconds(100)); // �������� � 1 �������


        Event event;
        while (window.pollEvent(event)) // ����'������ ���� �������� ����
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
		render_map(window); //������ ����
		hero.update();

        window.display();
    }

    return 0;
}