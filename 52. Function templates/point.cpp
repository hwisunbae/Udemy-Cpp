//
//  point.cpp
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "point.hpp"
#include <iostream>

using namespace std;

Point::Point(int x){
    this->x = x;
}
Point::~Point(){
    cout << "descturctor invoked (Point)" << endl;
}
void Point::setX(int x){
    this->x = x;
    cout << "from Point" << endl;
}
Point2D::Point2D (int x, int y){
    this->x = x;
    this->y = y;
}
Point2D::~Point2D(){
    cout << "descturctor invoked (Point2D)" << endl;
}
void Point2D::setX(int x){
    this->x = x;
    cout << "from Point2D" << endl;
}
void Point2D::setY(int y){
    this->y = y;
    cout << "from Point2D" << endl;
}
void Point2D::setXY(int x, int y){
    setX(x);
    setY(y);
}
Point2D Point2D::operator+ (Point2D obj){
    Point2D temp = *this;
    temp.setX(getX()+obj.getX());
    temp.setY(getY()+obj.getY());
    return temp;
}


