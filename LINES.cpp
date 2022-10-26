#include <cmath>
#include <iostream>
#include "LINES.h"
using namespace std;

LINES::LINES() {
    POINTS start, end;

}

bool LINES::init(POINTS start, POINTS end)
{
    if (&start == nullptr || &end == nullptr) return false;
    this->startPoint = start;
    this->endPoint = end;

    return true;
}

bool LINES::input() {
    POINTS start, end;

    if (start.input() && end.input()) this->init(start, end);

    return false;
}

void LINES::output() {
    std::cout << "Начальные координаты линии: ";
    this->startPoint.output();

    std::cout << "\nКонечные координаты линии:  ";
    this->endPoint.output();

    std::cout << "\nДлина линии: " << this->lenght()<<endl;


}

float LINES::lenght() {
    return this->startPoint.distance(this->endPoint);
}

void LINES::lenght(float *l) {
    *l = this->startPoint.distance(this->endPoint);

}

void LINES::lenght(float &l) {
    l = this->startPoint.distance(this->endPoint);

}

POINTS LINES::getStartPiont() {
    return this->startPoint;
}

POINTS LINES::getEndPoint() {
    return this->endPoint;
}
