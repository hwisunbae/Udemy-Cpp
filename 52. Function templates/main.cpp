//  52. Function templates


//  main.cpp
//  WORK
//  function template
//  Created by Hwisun Bae on 2018-09-26.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "point.hpp"
template <typename T, typename T2>
T add(T var1, T2 var2){
    return var1+var2;
}
//template <>
//Point2D add (Point2D var1, Point2D var2){
//    Point2D temp;
//    temp.setX(var1.getX() + var2.getX());
//    temp.setY(var1.getY() + var2.getY());
//    return temp;
//}

//int add(int var1, int var2){
//    return var1 + var2;
//}
//double add(double var1, double var2){
//    return var1 + var2;
//}
//double add(double var1, int var2){
//    return var1 + var2;
//}
//double add(int var1, double var2){
//    return var1 + var2;
//}
void operationOnPoint();
int main (){
    operationOnPoint();
//    cout << add(3.5,4) << endl; //7.5
//    cout << add<double,double>(3,5.5) << endl; //8 -> 8.5
//    cout << static_cast<int>(6.5) << endl;
    return 0;
}

void operationOnPoint(){
    Point2D a(10,67);
    Point2D b(50,3);
    
    Point2D sum = add(a,b);
    cout << sum.getX() << endl;
    cout << sum.getY() << endl;
//    a.Point2D::setX(30);
//    cout << a.getX() << endl;
    
}
