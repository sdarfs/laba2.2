//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_TRIANGLES_H
#define TASK2_TRIANGLES_H
#include "POINTS.h"

class TRIANGLES {
private:
    POINTS point_1s, point_2s, point_3s;

public:
    TRIANGLES();
    bool input();
    void output();
    float lineLength(int lineNumber);
    float perimeter();
    float area();
    POINTS getFirstPoint();
    POINTS getSecondPoint();
    POINTS getThirdPoint();
    bool init(POINTS first, POINTS second, POINTS third);


};


#endif //TASK2_TRIANGLES_H
