#include "TRIANGLES.h"
#include <iostream>
#include <cmath>
using namespace std;

TRIANGLES::TRIANGLES()
{
}

bool TRIANGLES::init(POINTS first, POINTS second, POINTS third) {
    if (&first == NULL || &second == NULL || &third == NULL) return false;

    float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(first);

    if (d1 == 0 || d2 == 0 || d3 == 0 ||
        d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2) {
        return false;
    }

    this->point_1s = first;
    this->point_2s = second;
    this->point_3s= third;

    return true;
}


bool TRIANGLES::input()
{
    POINTS first, second, third;
    if (first.input() && second.input() && third.input()) this->init(first, second, third);

    return false;
}

void TRIANGLES::output()
{
    cout << "ТРЕУГОЛЬНИК\n"<< endl;
    cout << "КООРДИНАТЫ ВВЕДЕНЫХ ТОЧЕК\n";

    cout << "ПЕРВАЯ КООРДИНАТА: ";
    this->point_1s.output();

    cout << "\nВТОРАЯ КООРДИНАТА: ";
    this->point_2s.output();

    cout << "\nТРЕТЬЯ КООРДИНАТА: ";
    this->point_3s.output();

    cout << "\n\nДЛИНЫ СТОРОН ТРЕУГОЛЬНИКА\n";
    cout << "ДЛИНА ПЕРВОЙ СТОРОНЫ = " << this->lineLength(1);
    cout << "\nДЛИНА ВТОРОЙ СТОРОНЫ = " << this->lineLength(2);
    cout << "\nДЛИНА ТРЕТЬЕЙ СТОРОНЫ = " << this->lineLength(3);

    cout << "\n\nПЕРИМЕТР ТРЕУГОЛЬНИКА = " << this->perimeter();
    cout << "\nПЛОЩАДЬ ТРЕУГОЛЬНКИА = " << this->area();
    cout<<'\n';
}

float TRIANGLES::lineLength(int lineNumber)
{
    if (lineNumber < 1 || lineNumber>3) return -1;

    switch (lineNumber) {
        case 1:
            return this->point_1s.distance(this->point_2s);
            break;

        case 2:
            return this->point_2s.distance(this->point_3s);
            break;

        case 3:
            return this->point_3s.distance(this->point_1s);
            break;
    }
}

float TRIANGLES::perimeter()
{
    float perimeter = 0;
    for (int i = 1; i < 4; i++) {
        perimeter += this->lineLength(i);
    }

    return perimeter;
}

float TRIANGLES::area()
{
    float semiPerimeter = this->perimeter() / 2;
    return  sqrtf(semiPerimeter * (semiPerimeter - this->lineLength(1)) * (semiPerimeter - this->lineLength(2) * (semiPerimeter - this->lineLength(3)))); //������� ������
}

POINTS TRIANGLES::getFirstPoint()
{
    return this->point_1s;
}

POINTS TRIANGLES::getSecondPoint()
{
    return this->point_2s;
}

POINTS TRIANGLES::getThirdPoint()
{
    return this->point_3s;
}

