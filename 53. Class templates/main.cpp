//
//  main.cpp
//  position
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include "point.hpp"
using namespace std;
/* function templates generalization */

template <typename T, typename T2>
T add(T var1, T2 var2) { return var1+var2; }
/*
template <>
Point2D add(Point2D var1, Point2D var2){
    Point2D temp;
    temp.setX(var1.getX() + var2.getX());
    temp.setY(var1.getY() + var2.getY());
    return temp;
}
*/
void operationOnPoints();
/*
int add (int var1, int var2){ return var1 + var2; }
double add (double var1, double var2){ return var1 + var2; }
double add (double var1, int var2){ return var1 + var2; }
double add (int var1, double var2){ return var1 + var2; }
 */
typedef Point<int> PointInt;
int main() {
    
    operationOnPoints();
    /*
    cout << add(2,3.2) << endl; //result 5
    cout << add<double, double>(2,3.2) << endl; //result 5.2
    cout << static_cast<int>(5.5) << endl;
    */
    
     
    return 0;
}

void operationOnPoints(){
    
    Point<int*> b(40);
    
//    cout << b.getX() << endl; //need to add functions in Point<char>
    
    /*
    p2.Point::setX(50);
    
    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
     */
}
