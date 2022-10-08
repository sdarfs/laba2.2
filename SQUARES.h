//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_SQUARES_H
#define TASK2_SQUARES_H

#include "POINTS.h"
class SQUARES {
public:
    POINTS point_1, point_2, point_3, point_4;
    SQUARES();
    ~SQUARES(); //DESTRUCTUR
    SQUARES( POINTS FirstPoint, POINTS SecondPoint, POINTS ThirdPoint, POINTS FourthPoint); //CONSTRUCTUR WITH PARAMETRS
    void SquareInit(POINTS* a, POINTS* b, POINTS* c, POINTS*d);
    float squarePerimeter(SQUARES square);
    float SquareArea(SQUARES square);


};

#endif //TASK2_SQUARES_H
