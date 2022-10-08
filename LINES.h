//
// Created by Daria on 06.10.2022.
//

#ifndef TASK2_LINES_H
#define TASK2_LINES_H
#include "POINTS.h"
class LINES
{
public:
    POINTS point_1, point_2;
    float lenght_line(LINES *line);
    void lineInit(POINTS *a, POINTS *b);
    LINES();
    ~LINES(); //DESTRUCTUR
    LINES( POINTS start, POINTS end); //CONSTRUCTUR WITH PARAMETRS
};

#endif //TASK2_LINES_H
