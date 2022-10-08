//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_CIRCLES_H
#define TASK2_CIRCLES_H
#include "POINTS.h"

class CIRCLES {
    POINTS centers;
    float radius;

    //DESTRUCTUR
    CIRCLES(POINTS CENTER, float  r); //CONSTRUCTUR WITH PARAMETRS

public:
    CIRCLES();

    void CircleInit(POINTS *a, float r);

    ~CIRCLES();

    float CircleArea(CIRCLES circles);
};


#endif //TASK2_CIRCLES_H
