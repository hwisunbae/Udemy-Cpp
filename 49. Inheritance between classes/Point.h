//  49. Inheritance between classes
//  Point.h
//  WORK
//
//  Created by Hwisun Bae on 2018-08-05.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef Point_h
#define Point_h
class Point {
protected:
    int x;
public:
    Point(int = 0);
    ~Point();
    int getX() { return x; }
    void setX(int x) {this->x = x;}
};

class Point2d : public Point {
protected:
    int y;
public:
    Point2d(int = 0, int = 0) ;
    ~Point2d();
    void setY(int);
    void setXY(int , int);
    void setX(int);
    int getY() { return y; }
};

class Point3d : public Point2d{
    
};


#endif /* Point_h */
