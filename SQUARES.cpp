#include "SQUARES.h"
#include <cmath>
#include <iostream>
using namespace std;


SQUARES::SQUARES() {

}
bool SQUARES::init(POINTS first, POINTS second, POINTS third, POINTS fourth)
{
    if (&first == nullptr || &second == nullptr || &third == nullptr || &fourth == nullptr) return false;
    float d1 = first.distance(second), d2 = second.distance(third), d3 = third.distance(fourth), d4 = fourth.distance(first);

    if (d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0 ||
        first.distance(third) == 0 || second.distance(fourth) == 0 ||

        d1 != d2 || d1 != d3 || d1 != d4 || d2 != d3 || d2 != d4 || d3 != d4) {
        return false;
    }

    this->firstPoint = first;
    this->secondPoint = second;
    this->thirdPoint = third;
    this->fourthPoint = fourth;

    return true;
}

bool SQUARES::input()
{
    POINTS first, second, third, fourth;
    if (first.input() && second.input() && third.input() && fourth.input()) this->init(first, second, third, fourth);

    return false;
}

void SQUARES::output()
{
    cout << "КВАДРАТ\n"<<endl;
    cout << "КООРДИНАТЫ ВЕРШИН КВАДРАТА\n";

    cout << "ПЕРВАЯ КООРДИНАТА: ";
    this->firstPoint.output();

    cout << "\nВТОРАЯ КООРДИНАТА: ";
    this->secondPoint.output();

    cout << "\nТРЕТЬЯ КООРДИНАТА: ";
    this->thirdPoint.output();

    cout << "\nЧЕТВЕРТАЯ КООРДИНАТА: ";
    this->fourthPoint.output();

    cout << "\n\nДЛИНА СТОРОНЫ КВАДРАТА = " << this->lineLength();

    cout << "\n\nПЕРИМЕТР КВАДРАТА = " << this->perimeter();
    cout << "\nПЛОЩАДЬ КВАДРАТА = " << this->area();
    cout<<'\n';

}

float SQUARES::lineLength()
{
    return this->firstPoint.distance(this->secondPoint);
}

float SQUARES::perimeter()
{
    return this->lineLength()*4;
}

float SQUARES::area()
{
    return this->lineLength()*this->lineLength();
}

POINTS SQUARES::getFirstPoint()
{
    return this->firstPoint;
}

POINTS SQUARES::getSecondPoint()
{
    return this->secondPoint;
}

POINTS SQUARES::getThirdPoint()
{
    return this->thirdPoint;
}

POINTS SQUARES::getFourthPoint()
{
    return this->fourthPoint;
}
