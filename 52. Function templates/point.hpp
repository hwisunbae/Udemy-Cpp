//  52. Function templates


//
//  point.hpp
//  WORK
//
//  Created by Hwisun Bae on 2018-09-26.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

#include <iostream>
using namespace std;

class Point{
protected:
    int x;
public:
    Point(int =0);
    ~Point();
    int getX() { return x; }
    void setX(int);
};

class Point2D : public Point {
protected:
    int y;
public:
    Point2D(int =0, int =0);
    ~Point2D();
    int getY() { return y;}
    void setY(int);
    void setX(int);
    void setXY(int, int);
    Point2D operator+(Point2D);
};

class Point3D :public Point2D{
    
};

#endif /* point_hpp */
