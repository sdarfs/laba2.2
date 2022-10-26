#include "POINTS.h"
#include <iostream>
#include <cmath>
using namespace std;


POINTS::POINTS() {
    x=y=0;
}

POINTS::POINTS(float x, float y) {
    this->x = x;
    this->y = y;
}

bool POINTS::input() {
    float x, y;
    if (cin >> x >> y) {
        this->x = x;
        this->y = y;
        return true;
    }
    else
        return false;
}

void POINTS::output() {
    cout << "x = " << this->x << ", y = " << this->y;
}

float POINTS::distance(POINTS end) {
    if (&end == NULL) return -1;

    float d1 = end.x - this->x, d2 = end.y - this->y;
    return sqrt(d1 * d1 + d2 * d2);
}

float POINTS::getX()
{
    return this->x;
}

float POINTS::getY()
{
    return this->y;
}
