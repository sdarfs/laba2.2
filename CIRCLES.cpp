//
// Created by Daria on 06.10.2022.
//

#include "CIRCLES.h"
#include <cmath>
#define PI 3.1415926535
CIRCLES::CIRCLES() {
    centers.x = centers.y = radius = 0;
}

CIRCLES::~CIRCLES() {

}

CIRCLES::CIRCLES(POINTS CENTER, float r) {
   centers.x = CENTER.x;
   centers.y = CENTER.y;
   radius = r;

}

float CIRCLES::CircleArea(CIRCLES circles) {
    if (&circles == NULL) return false;
    return PI * circles.radius * circles.radius;
}

void CIRCLES::CircleInit(POINTS *a, float r) {

    this->centers =*a ;
    this->radius = r;
}

