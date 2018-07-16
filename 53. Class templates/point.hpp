//
//  point.hpp
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//


#ifndef point_hpp
#define point_hpp
#include <iostream>
using namespace std;

template <typename T>
class Point{
protected:
    T x;
public:
    Point (T=0);
    ~Point ();
    T getX();
    void setX(T);
};
template <typename T>
Point<T>::Point(T x){
    this->x = x;
}
template <typename T>
Point<T>::~Point(){
    cout << "descturctor invoked (Point)" << endl;
}
template <typename T>
void Point<T>::setX(T x){
    this->x = x;
    cout << "from Point" << endl;
}
template <typename T>
T Point<T>:: getX(){
    return this->x;
}

template <>
double Point<double>::getX() {
    cout << "this function only executed only when Point<double>" << endl;
    return this->x;
}
template <typename K>
class Point<K*> {
public:
    Point(K a=0) { cout << "can't use pointer here" << endl ; }
};


template <typename T>
class Point2D : public Point<T>{
protected:
    int y;
public:
    Point2D (T=0, T=0);
    ~Point2D();
    T getY() {return y;}
    void setX(T);
    void setY(T);
    void setXY(T, T);
    Point2D operator+ (Point2D);
};
template <typename T>
Point2D<T>::Point2D (T x, T y) : Point<T>(x){
    this->y = y;
}
template <typename T>
Point2D<T>::~Point2D(){
    cout << "descturctor invoked (Point2D)" << endl;
}
template <typename T>
void Point2D<T>::setX(T x){
    this->x = x;
    cout << "from Point2D" << endl;
}
template <typename T>
void Point2D<T>::setY(T y){
    this->y = y;
    cout << "from Point2D" << endl;
}
template <typename T>
void Point2D<T>::setXY(T x, T y){
    setX(x);
    setY(y);
}
template <typename T>
Point2D<T> Point2D<T>::operator+ (Point2D obj){
    Point2D temp = *this;
    temp.setX(this->getX()+obj.getX());
    temp.setY(this->getY()+obj.getY());
    return temp;
}
template <>
class Point<char> {
public:
    Point(char a=0) { cout << "this is from Point<char>" << endl; }
};
/*
class Point3D : public Point2D{
    
};
*/
#endif /* point_hpp */
