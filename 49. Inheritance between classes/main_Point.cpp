//
//  main.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-06-15.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
using namespace std;

void operation ();

int main (){
    operation();
    return 0;
}

void operation (){
    Point2d a(40,50);
    //a.setXY(20,30);
    a.Point::setX(3); // shadowing
    cout << a.getX() << endl;
    cout << a.getY() << endl;
}
