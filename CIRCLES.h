//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_CIRCLES_H
#define TASK2_CIRCLES_H
#include "POINTS.h"

class CIRCLES {
private:
    POINTS center;

public:
    float radius;
    CIRCLES();
    bool init(POINTS center, float radius);
    bool input();
    void output();
    float area();
    float circlelenght();
    POINTS getCenter();
    float getRadius();
    friend float check(CIRCLES x);
    friend float RoundRadius(CIRCLES x);

static float radius_second;//статическое поле - радиус.
static float area_ring(CIRCLES r);

//функции перегрузки +
CIRCLES operator+(CIRCLES b);//сложение двух объектов оператор+
CIRCLES operator+(float b);//сложение с числом справа

//функции перегрузки ++
CIRCLES & operator ++();
CIRCLES operator ++(int unused);


};
#endif //TASK2_CIRCLES_H
