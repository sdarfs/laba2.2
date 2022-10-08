//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_TRIANGLES_H
#define TASK2_TRIANGLES_H
#include "POINTS.h"

class TRIANGLES {
    POINTS point_1s, point_2s, point_3s;

    //DESTRUCTUR
    TRIANGLES( POINTS FirstPoint, POINTS SecondPoint, POINTS ThirdPoint); //CONSTRUCTUR WITH PARAMETRS
    float triangleLineLength(TRIANGLES triangle, int lineNumber);

public:
    TRIANGLES();

    ~TRIANGLES();

    void TriangleInit(POINTS* a, POINTS* b, POINTS* c);

    float TrianglePerimeter(TRIANGLES triangles);

    float TriangleArea(TRIANGLES triangles);
};


#endif //TASK2_TRIANGLES_H
