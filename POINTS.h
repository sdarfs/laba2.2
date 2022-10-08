
#ifndef TASK2_POINTS_H
#define TASK2_POINTS_H
#include <MacTypes.h>
class POINTS {
public:
    float x, y;
    float distance(POINTS start, POINTS end);
    void Init(float a, float b);
    POINTS();
    ~POINTS(); //DESTRUCTUR
    POINTS(float a, float b); //CONSTRUCTUR WITH PARAMETRS
private:

};
#endif //TASK2_POINTS_H
