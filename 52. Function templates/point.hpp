//
//  point.hpp
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

class Point{
protected:
    int x;
public:
    Point (int=0);
    ~Point ();
    int getX(){ return x;}
    void setX(int);
};

class Point2D : public Point{
protected:
    int y;
public:
    Point2D (int=0, int=0);
    ~Point2D();
    int getY() {return y;}
    void setX(int);
    void setY(int);
    void setXY(int, int);
    Point2D operator+ (Point2D);
};

class Point3D : public Point2D{
    
};


#endif /* point_hpp */
