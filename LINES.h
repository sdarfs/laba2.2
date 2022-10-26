//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_LINES_H
#define TASK2_LINES_H
#include "POINTS.h"
class LINES
{
private:
    POINTS startPoint, endPoint;

public:
    bool init(POINTS start, POINTS end);
    LINES();
    bool input();
    void output();

    float lenght();
    void lenght(float *l);
    void lenght(float &l);
    POINTS getStartPiont();
    POINTS getEndPoint();

};

#endif //TASK2_LINES_H
