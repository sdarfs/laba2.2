#ifndef TASK2_SQUARES_H
#define TASK2_SQUARES_H

#include "POINTS.h"
class SQUARES {
private:
    POINTS firstPoint, secondPoint, thirdPoint, fourthPoint;

public:
    SQUARES();
    bool init(POINTS first, POINTS second, POINTS third, POINTS fourth);
    bool input();
    void output();
    float lineLength();
    float perimeter();
    float area();
    POINTS getFirstPoint();
    POINTS getSecondPoint();
    POINTS getThirdPoint();
    POINTS getFourthPoint();
};

#endif //TASK2_SQUARES_H
