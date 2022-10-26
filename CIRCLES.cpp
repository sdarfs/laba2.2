#include "CIRCLES.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.1415926535

CIRCLES::CIRCLES()
{
}

bool CIRCLES::init(POINTS center, float radius) {
    if (&center == nullptr && &radius == nullptr) return false;

    this->center = center;
    this->radius = radius;

    return true;
}


bool CIRCLES::input()
{
    POINTS center;
    float radius;
    if (center.input() && cin >> radius) this->init(center, radius);

    return false;
}

void CIRCLES::output()
{
    cout << "КРУГ\n"  << endl;
    cout << "КООРДИНАТЫ ЦЕНТРА КРУГА: ";
    this->center.output();
    cout << "\nРАДИУС = " << this->radius;

    cout << "\n\nДЛИНА ЛИНИИ ОКРУЖНОСТИ = " << this->circlelenght();
    cout << "\nПЛОЩАДЬ ОКРУЖНОСТИ = " << this->area()<< endl;
}

float CIRCLES::area()
{
    return PI * this->radius * this->radius;
}

float CIRCLES::circlelenght()
{
    return 2 * PI * this->radius;
}

POINTS CIRCLES::getCenter()
{
    return this->center;
}

float CIRCLES::getRadius()
{
    return this->radius;
}

float check(CIRCLES x) {
    if(x.radius<=0)
        return fabs(x.radius);
    else
        return x.radius;
}



CIRCLES &CIRCLES::operator++() { //prefix
    this-> radius++; //сначала присвоить, потом увеличить
    return *this;
}

CIRCLES CIRCLES::operator++(int unused) { //postfix
    CIRCLES r = *this;
    ++*this; //сначала увеличить,потом присвоить
    return r;
}

CIRCLES CIRCLES::operator+(CIRCLES b) { //сложение двух объектов
    CIRCLES r;
    r.radius = this->radius+b.radius;
    return r;
}

CIRCLES CIRCLES::operator+(float b) { //сложение с числом справа
    CIRCLES r;
    r.radius=this->radius+b;
    cout<<"Новый радиус после сложения с числом справа: "<<r.radius;
    return r;

}

float RoundRadius(CIRCLES x) {
    if (x.radius>=0)
        return ceil(x.radius);
    else
        return -1;
}

float CIRCLES::area_ring(CIRCLES r) {
    float area;
    if (r.radius > radius_second)
        area = PI * (pow(r.radius,2) - pow(radius_second,2));
    else
        area = PI * (pow(radius_second,2) - pow(r.radius,2));
    return area;
}
float CIRCLES::radius_second = 100;





