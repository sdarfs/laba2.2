#include "TRIANGLES.h"
#include <cmath>
#include <iostream>

TRIANGLES::TRIANGLES() {
    point_1s.x=point_2s.x=point_1s.y=point_2s.y=point_3s.x=point_3s.y=0;
}

TRIANGLES::~TRIANGLES() {

}

TRIANGLES::TRIANGLES(POINTS FirstPoint, POINTS SecondPoint, POINTS ThirdPoint) {
    point_1s.x = FirstPoint.x;
    point_1s.y = FirstPoint.y;
    point_2s.x = SecondPoint.x;
    point_2s.y = SecondPoint.y;
    point_3s.x = ThirdPoint.x;
    point_3s.y = ThirdPoint.y;
}

void TRIANGLES::TriangleInit(POINTS *a, POINTS *b, POINTS *c) {
    this->point_1s=*a;
    this->point_2s=*b;
    this->point_3s=*c;
    std::cout << point_1s.x <<" "<< point_1s.y<<" "<< point_2s.x<< " "<< point_2s.y<<" "<<
    point_3s.x<<" "<< point_3s.y<<'\n';
}
float TRIANGLES::triangleLineLength(TRIANGLES triangle, int lineNumber) {
    if (&triangle == NULL) return -1;
    POINTS Point_instance;
    switch (lineNumber){
        case 1:
            return Point_instance.distance(triangle.point_1s, triangle.point_2s);
            break;

        case 2:
            return Point_instance.distance(triangle.point_2s, triangle.point_3s);
            break;

        case 3:
            return Point_instance.distance(triangle.point_3s, triangle.point_1s);
            break;
    }

}
float TRIANGLES::TrianglePerimeter(TRIANGLES triangles) {
    if (&triangles == NULL) return -1;
    float perimeter = 0;
    for (int i = 1; i < 4; i++) {
        perimeter += triangleLineLength(triangles, i);
    }
    std::cout<<perimeter;
}

float TRIANGLES::TriangleArea(TRIANGLES triangles) {
    if (&triangles == NULL) return -1;

    float semiPerimeter = TrianglePerimeter(triangles) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - triangleLineLength(triangles, 1)) *
                 (semiPerimeter - triangleLineLength(triangles, 2)) * (semiPerimeter - triangleLineLength(triangles, 3)));
}


