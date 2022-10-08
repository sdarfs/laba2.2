#include "POINTS.h"
#include <cmath>
#include <iostream>

POINTS::POINTS() {
    x=y=0;
}

POINTS::~POINTS() {

}

void POINTS::Init(float a, float b) {
    this->x=a;
    this->y=b;
    std:: cout << a << ' ' << b << '\n';

}

POINTS::POINTS(float a, float b) {
    x = a;
    y = b;
}

float POINTS::distance(POINTS start, POINTS end) {
    if (&start == 0 || &end == 0) return -1;
    float
            d1 = end.x - start.x,
            d2 = end.y - start.y;
    return sqrt(d1 * d1 + d2 * d2);
}

