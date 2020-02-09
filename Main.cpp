#include "Header.h"



int main() {

    RenderWindow window(VideoMode(1280, 1024), "2d_Game" /*,Style::Fulscreen*/); //������ ����


    float CurrentFrame = 0;
    Clock clock; //������ ����� ����, ����� ����� ����'���� �� ���� (� �� �����������/������� ���������).

    String TileMap[HEIGHT_MAP] = {
    "0000000000000000000000000000000000000000",
    "0                                      0",
    "0   ss                                 0",
    "0   ss                                 0",
    "0   ssss                               0",
    "0     ss                               0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0                                      0",
    "0000000000000000000000000000000000000000",
    };

    while (window.isOpen()) // ����'������� ����
    {
        this_thread::sleep_for(chrono::milliseconds(100)); // �������� � 1 �������

        


        Event event;
        while (window.pollEvent(event)) // ����'������ ���� �������� ����
        {
            if (event.type == Event::Closed)
                window.close();
        }

        /*float time = clock.getElapsedTime().asMicroseconds(); //�������� ���, ���� ������� � ������� �������
        clock.restart(); //������������ ���
        time /= 800000; //�������� ���*/
        /*if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A)))) {
            //Hero.dir = 0; Hero.speed = 0.5;
            CurrentFrame += 0.005 * time;
            if (CurrentFrame > 6) CurrentFrame -= 6;
            //Hero.sprite.setTextureRect(IntRect(360 * int(CurrentFrame) + 360, 0, -360, 400));
        }

        if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D)))) {
            //Hero.dir = 2; Hero.speed = 0.5;
            CurrentFrame += 0.005 * time;
            if (CurrentFrame > 6) CurrentFrame -= 6;
            //Hero.sprite.setTextureRect(IntRect(360 * int(CurrentFrame), 0, 360, 400));
        }


        if (Keyboard::isKeyPressed(Keyboard::Up) || Keyboard::isKeyPressed(Keyboard::W)) {
            //Hero.dir = 1; Hero.speed = 0.5;
        }

        if (Keyboard::isKeyPressed(Keyboard::Down) || Keyboard::isKeyPressed(Keyboard::S)) {
            //Hero.dir = 3; Hero.speed = 0.5;
        }*/




        //Hero.update(time);  //�������� ��'��� Hero ����� Player �� �������� ���� sfml, ����� �� �������� ���� ��������

        window.clear();

        make_map(window, TileMap); //������ ����

        //window.draw(Hero.sprite);   //������ ������ ��'���� Hero
        window.display();
    }

    return 0;
}