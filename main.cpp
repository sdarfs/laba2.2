#include <iostream>
#include "POINTS.h"
#include "LINES.h"
#include "TRIANGLES.h"
#include "SQUARES.h"
#include "CIRCLES.h"
using namespace std;
int main() {
    //ТОЧКА
    // динамический массив объектов класса
    cout << " POINTS\n";
    POINTS *a;
    int i;
    a = new POINTS[5]; //  массив из 5 объектов
    for (i = 0; i < 5; i++) {
        a[i].Init(6, i);
        std::cout << '\n';
    }
    delete[] a;            // для освобождения памяти массива delete[]

    cout << "DYNAMIC OBJECT - POINTS\n";
    POINTS *dynamic;                // объект - указатель на класс  POINTS
    dynamic= new POINTS;           // вместо calloc
    dynamic->Init(6,7);     // вместо (*a).Init(6,7); Записали динамически координаты одной точки
    delete dynamic;              // вместо free

    // ЛИНИЯ
    cout << "LINES\n";
    LINES *line;
    line = new LINES[5];
    POINTS* start;
    start = new POINTS;
    POINTS *end;
    end = new POINTS;
    for (i = 0; i < 5; i++) {
        start->Init(i+1, i + 3);
        end->Init(i+2, i + 5);
        line[i].lineInit(start, end);
        std::cout << '\n';
    }
    delete[] line;

    cout << "DYNAMIC OBJECT - LINES\n";
    LINES *new_line;
    new_line = new LINES;
    POINTS *start_new,*end_new;
    start_new = new POINTS;
    start_new->Init(6,7);
    end_new = new POINTS;
    end_new-> Init(8,7);
    new_line->lineInit(start_new, end_new);
    cout << "длина линии:"<<new_line->lenght_line(new_line)<<'\n';
    delete [] new_line;

    // КВАДРАТ
    cout << "DYNAMIC OBJECT - SQUARES\n";
    SQUARES *square;
    square = new SQUARES[5];
    POINTS* firstPoints;
    firstPoints = new POINTS;
    POINTS *secondPoints;
    secondPoints = new POINTS;
    POINTS* thirdPoints;
    thirdPoints = new POINTS;
    POINTS *fourthPoints;
    fourthPoints = new POINTS;
    for (i = 0; i < 5; i++) {
        firstPoints->Init(0, 0);
        secondPoints->Init(0, 1);
        thirdPoints->Init(1, 1);
        fourthPoints->Init(1,0);

        square[i].SquareInit(firstPoints,secondPoints,thirdPoints, fourthPoints);
        std::cout << '\n';
    }
    delete[] square;

    cout << "SQUARES\n";
    SQUARES *squares;
    squares = new SQUARES;
    POINTS* firstPoint;
    firstPoint = new POINTS;
    firstPoint->Init(0,0);
    POINTS *secondPoint;
    secondPoint = new POINTS;
    secondPoint->Init(0,1);
    POINTS* thirdPoint;
    thirdPoint = new POINTS;
    thirdPoint->Init(1,1);
    POINTS *fourthPoint;
    fourthPoint = new POINTS;
    fourthPoint->Init(1,0);
    squares->SquareInit(firstPoint, secondPoint, thirdPoint, fourthPoint);
    cout << "Периметр:" << squares->squarePerimeter(*squares) << '\n';
    cout << "Плошадь:" << squares->SquareArea(*squares)<< "\n";


    //ТРЕУГОЛЬНИК
    cout << "TRIANGLES\n";
    TRIANGLES *triangle;
    triangle = new TRIANGLES[5];
    POINTS* Point_1;
    Point_1 = new POINTS;
    POINTS *Point_2;
    Point_2 = new POINTS;
    POINTS* Point_3;
    Point_3 = new POINTS;
    for (i = 0; i < 5; i++) {
        Point_1->Init(3, 7);
        Point_2->Init(10, 18);
        Point_3->Init(20, 9);

        triangle[i].TriangleInit(Point_1,Point_2,Point_3);
        std::cout << '\n';
    }
    delete[] triangle;

    cout << "DYNAMIC OBJECT - TRIANGLES \n";
    TRIANGLES *triangles;
    triangles = new TRIANGLES[5];
    POINTS* Point_1s;
    Point_1s = new POINTS;
    Point_1s -> Init(1,1);
    POINTS *Point_2s;
    Point_2s = new POINTS;
    Point_2s->Init(2,4);
    POINTS* Point_3s;
    Point_3s = new POINTS;
    Point_3s->Init(4,2);
    triangles->TriangleInit(Point_1s,Point_2s,Point_3s);
    cout << "Периметр:"<<triangles->TrianglePerimeter(*triangles)<<'\n';
    cout << "Площадь:"<< triangles->TriangleArea(*triangles)<< '\n';
    delete [] triangles;

    //КРУГ
    cout << "CIRCLES\n";
    CIRCLES *circle;
    circle = new CIRCLES[5];
    POINTS* abc;
    abc = new POINTS;
    for (i = 0; i < 5; i++) {
        abc->Init(i+2, i+5);
        float radius = (i+1)*(i+1);

        circle[i].CircleInit(Point_1,radius);
        cout <<"Радиус:"<< radius;
        std::cout << '\n';
    }
    delete[] circle;

    cout << "DYNAMIC OBJECT - CIRCLES \n";
    CIRCLES *circles;
    circles = new CIRCLES;
    POINTS* abcd;
    abcd = new POINTS;
    abcd->Init(2,3);
    float rad = 5;
    circles->CircleInit(abcd,rad);
    std::cout<<"Радиус:"<< rad<<"\n";
    cout << "Площадь:"<< circles->CircleArea(*circles)<< '\n';
    delete [] circles;

    return 0;
}
