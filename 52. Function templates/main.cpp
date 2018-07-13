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
    Point2D p1(10, 67);
    Point2D p2(50, 3);
    Point2D sum = add (p1, p2);  // 60, 70 expected result
    cout << sum.getX() << endl;
    cout << sum.getY() << endl;
    
    
    /*
    p2.Point::setX(50);
    
    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
     */
}
