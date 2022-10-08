//
// Created by Daria on 06.10.2022.
//

#include "SQUARES.h"
#include <cmath>
#include <iostream>

float squareLineLength(SQUARES square) {
    if (&square == NULL) return -1;
    POINTS Point_instance;
    return Point_instance.distance(square.point_1, square.point_2);
}

float squareArea(SQUARES square){
    if (&square == NULL)  return -1;
    return squareLineLength(square) * squareLineLength(square);
}


void SQUARES::SquareInit(POINTS *a, POINTS *b, POINTS *c, POINTS *d)  {
    this->point_1=*a;
    this->point_2=*b;
    this->point_3 =*c;
    this->point_4 = *d;
    std::cout << point_1.x <<" "<< point_1.y<<" "<< point_2.x<< " "<< point_2.y<<' '<<
    point_3.x<<" "<<point_3.y<<" "<<point_4.x<<" "<<point_4.y<<'\n';

}

SQUARES::SQUARES() {
    point_1.x=point_2.x=point_1.y=point_2.y=point_3.x=point_3.y=point_4.x=point_4.y=0;
}

SQUARES::~SQUARES() {

}

SQUARES::SQUARES(POINTS FirstPoint, POINTS SecondPoint, POINTS ThirdPoint, POINTS FourthPoint) {
    point_1.x = FirstPoint.x;
    point_1.y = FirstPoint.y;
    point_2.x = SecondPoint.x;
    point_2.y = SecondPoint.y;
    point_3.x = ThirdPoint.x;
    point_3.y = ThirdPoint.y;
    point_4.x = FourthPoint.x;
    point_4.y = FourthPoint.y;
}

float SQUARES::squarePerimeter(SQUARES square) {
    if (&square == NULL) return -1;
    return squareLineLength(square)*4;
}

float SQUARES::SquareArea(SQUARES square) {
    if (&square == NULL)  return -1;
    return squareLineLength(square) * squareLineLength(square);
}

