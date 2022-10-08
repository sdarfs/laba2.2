#include <cmath>
#include <iostream>
#include "LINES.h"

void LINES::lineInit(POINTS* a, POINTS* b) {
    this->point_1=*a;
    this->point_2=*b;
    std::cout << point_1.x <<" "<< point_1.y<<" "<< point_2.x<< " "<< point_2.y<<'\n';

}

float LINES::lenght_line(LINES *line) {
    if (line == NULL) return -1;
    POINTS Point_instance;
    return Point_instance.distance(line->point_1, line->point_2);

}

LINES::LINES() {
    point_1.x=point_2.x=point_1.y=point_2.y=0;
}

LINES::~LINES() {

}

LINES::LINES(POINTS start, POINTS end) {
    point_1.x = start.x;
    point_1.y = start.y;
    point_2.x = end.x;
    point_2.y = end.y;
}
