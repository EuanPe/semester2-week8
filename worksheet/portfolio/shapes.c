
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()


Line makeLine( Point p1, Point p2 ){
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ){
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l ){
    Point p1 = l.p[0];
    Point p2 = l.p[1];
    float x = p2.x - p1.x;
    float xsquared = x * x;
    float y = p2.y - p1.y;
    float ysquared = y*y;
    
    float added = xsquared + ysquared;
    float length = sqrt(added);
    return length;
}

float triangleArea( Triangle t ){
    Point p1 = t.p[0];
    Point p2 = t.p[1];
    Point p3 = t.p[2];

    float y1 = p2.y - p3.y;
    float y2 = p3.y - p1.y;
    float y3 = p1.y - p2.y;

    float p1total = p1.x * y1;
    float p2total = p2.x * y2;
    float p3total = p3.x * y3;

    float total = p1total + p2total + p3total;

    float Area = 0.5 * total;
    return fabsf(Area);
}

bool samePoint( Point p1, Point p2 ){
    if (p1.y == p2.y){
        if (p1.x == p1.x){
            return true;
        }
    }
    return false;
}

bool pointInLine( Point p, Line l){
    Point p1 = l.p[0];
    Point p2 = l.p[1];

    if (p.y == p1.y){
        if (p.x == p1.x){
            return true;
        }
    }
    if (p.y == p2.y){
        if (p.x == p2.x){
            return true;
        }
    }
    return false;
}

bool pointInTriangle( Point p, Triangle t ){
    Point p1 = t.p[0];
    Point p2 = t.p[1];
    Point p3 = t.p[2];

    if (p.y == p1.y){
        if (p.x == p1.x){
            return true;
        }
    }
    if (p.y == p2.y){
        if (p.x == p2.x){
            return true;
        }
    }
    if (p.y == p3.y){
        if (p.x == p3.x){
            return true;
        }
    }
    return false;
}