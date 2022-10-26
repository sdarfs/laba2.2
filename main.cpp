#include <iostream>
#include "POINTS.h"
#include "LINES.h"
#include "TRIANGLES.h"
#include "SQUARES.h"
#include "CIRCLES.h"
#include <string.h>
using namespace std;
int main() {
    //Тест Point
    //POINTS firstPoint(0, 0), secondPoint;
    //cout << "Тест класса: ТОЧКИ" << endl << "Введите координаты второй точки: ";
    //secondPoint.input();

    //cin.clear();
    //while (cin.get() != '\n');

    //cout << "\nВведите координаты первой точки: ";
    //firstPoint.output();
    //cout << "\nВведите координаты второй точки: ";
    //secondPoint.output();
    // cout << "\nРасстояние между ними: " << firstPoint.distance(secondPoint);



    //Тест Line
    //LINES line;
    //cout << "\n\n\nТест класса: ЛИНИИ" << endl << "Введите начальные и конечные координаты линии: ";
    // line.input();

    //cin.clear();
    //while (cin.get() != '\n');

    // cout << "\nВывод координат линии:" << endl;
    //line.output();



    //Тест Triangle
    //TRIANGLES triangle;
    //cout << "\n\n\nТест класса: ТРЕУГОЛЬНИК" << endl << "Введите координаты вершин треугольника: ";
    // triangle.input();

    //cin.clear();
    // while (cin.get() != '\n');

    // triangle.output();



    //Тест Square
    //SQUARES square;
    //cout << "\n\n\nТест класса: КВАДРАТ" << endl
    //    << "Введите координаты вершин квадрата: ";
    //square.input();

    //cin.clear();
    //while (cin.get() != '\n');

    //square.output();

    //Тест Circle
    // CIRCLES circle;
    //cout << "\n\n\nТест класса: КРУГ" << endl << "Введите координаты центра и величину радиуса: ";
    //circle.input();

    //cin.clear();
    //while (cin.get() != '\n');

    //circle.output();


    //Создание динамического массива объектов класса Point
    //int n;

    //cout << "\n\nСоздание динамического массива точек\n";
    // cout << "ВВедите размерность массива: ";
    //cin >> n;

    //POINTS *arr = new POINTS[n];

    // for (int i = 0; i < n; i++) {
    //     cout << "\nВведите координаты " << i << " точки: ";
    //     arr[i].input();

    //     cin.clear();
    //    while (cin.get() != '\n');
    //}

    //cout << "\n\nВывод координат точек:";
    //for (int i = 0; i < n; i++) {
    //    cout << "\n";
    //    arr[i].output();
    // }
    // delete[] arr;



    POINTS d, c;
    d = POINTS(1, 2);
    c = POINTS(3, 4);
    LINES a;
    a.init(d, c);
    a.output();
    float l, m;
    a.lenght();  //вызов первого метода
    a.lenght(&l);// вызов второго
    cout << "Длина линии через &l: " << l << '\n';
    a.lenght(m); // вызов третьего
    cout << "Длина линии через *l: " << m << '\n';

//Перегрузка '+' , когда справа от '+' - число.
    CIRCLES circle;
    POINTS poi;
    poi = POINTS(0, 0);
    circle.init(poi, 6);
    circle = circle + 10;

//сложение двух объектов
    int kj;


    CIRCLES Circle, CIrcle;
    Circle.init(poi, 2);
    CIrcle.init(poi, 8);
    kj = CIrcle.radius + Circle.radius;
    cout << "\nНовый радиус двух окружностей:" << kj << '\n';
    cout << "Начальный радиус окружности 1: " << Circle.radius << '\n';
    cout << "Постфиксное сложение" << '\n';
    float kf = 1;
    kf = ++Circle.radius; //сначала увеличили на 1 потом присвоили
    cout << "Результат: " << kf << '\n';
    cout << "Префиксное сложение" << '\n';
    float kf1 = 1;
    kf = Circle.radius++; //сначала присвоили потом увеличили
    float kf2 = 0;

    cout << "Результат: " << kf << '\n';

    // CIRCLES CIRcles;
    // CIRcles.init(Poi, -5);
    // cout<<"Если R =: "<<check(Circle)<<".Вернули результат без изменений."<<'\n';
    // cout<<"Eсли R =: "<<CIRcles.radius<<'\n';
    //cout<<"После выполнения дружественной функции: "<<check(CIRcles)<<'\n';

    //cout<<"Результат округления: R = "<<Circle.radius<<"=>"<<RoundRadius(Circle)<<'\n';

    int n;
    string array_lenght[]{};
    cout<<"Введите количество линий"; cin>>n;

    for (int i = 0; i < n; i++) {
        cout << "\nВведите длину " << i+1 << " линии: "<<'\n';
        cin>>array_lenght[i];
        cin.clear();
        while (cin.get() != '\n');
    }
    cout<<"Длина введеных линий:\n";
    for (int i = 0; i < n; i++) {
        cout<<array_lenght[i]<<'\n';
    }
    string abc;
    for (int i = 0; i < n; i++) {
        abc += array_lenght[i];
    }
    cout<<"Сцепление строк: "<<abc<<'\n';
    string t;
    t = "90";
    abc.insert(2,t);
    cout<<"Вставка строки t: "<<abc<<'\n';

    CIRCLES krug;
    krug.init(poi,20);
    float ar;
    ar = CIRCLES::area_ring(krug);
    cout<<"Площадь кольца: "<< ar;


}


