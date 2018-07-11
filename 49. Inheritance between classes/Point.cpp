//
//  Point.cpp
//  
//
//  Created by Hwisun Bae on 2018-06-15.
//

#include "Point.hpp"
#include <iostream>
using namespace std;

Point::Point(int x){
    this->x = x;
    cout << "constructor" << endl;
}
Point::~Point(){
    cout << "destructor" << endl;
}
void Point::setX (int x){
    this->x = x;
    cout << "i'm from point" << endl;
}
Point2d::Point2d(int x , int y) : Point(x){
    this -> y = y;
    cout << "constructor 2d" << endl;
}
Point2d::~Point2d(){
    cout << "destructor 2d" << endl;
}

void Point2d::setY (int y){
    this -> y = y;
}
void Point2d::setXY (int x , int y){
    setX(x);
    setY(y);
}
void Point2d::setX (int x){
    this->x = x;
    cout << "i'm from point 2d" << endl;
}
