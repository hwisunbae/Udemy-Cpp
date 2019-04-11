//  52. Function templates


//
//  point.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-09-26.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "point.hpp"

Point::Point(int x){
    this->x = x;
}
Point::~Point(){
    cout << "dest from point" << endl;
}
void Point::setX(int x){
    this->x = x;
}
Point2D::Point2D(int x, int y){
    this->x = x;
    this->y = y;
}
Point2D::~Point2D(){
    cout << "dest from point2D" << endl;
}
void Point2D::setY(int y){
    this->y = y;
}
void Point2D::setX(int x){
    this->x = x;
}
void Point2D::setXY(int x, int y){
    this->x = x;
    this->y = y;
}
Point2D Point2D::operator+(Point2D obj){
    Point2D temp;
    temp.setX(this->getX()+obj.getX());
    temp.setY(this->getY()+obj.getY());
    return temp;
}
