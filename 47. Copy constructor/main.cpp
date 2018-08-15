//  47. Copy constructor
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include "test.hpp"
using namespace std;

int main() {

//    int a = 10;
//    int b = a;
//
//    a = 60;
//    cout << "a: " << a << endl;
//    cout << "b: " << b << endl;
    
    Test obj1(40, 100, 60);
    Test obj2 = obj1;
    
    obj2.y = 200;
    *(obj1.p) = 70;
    
    cout << "obj1.x : " << obj1.x << endl;
    cout << "obj1.y : " << obj1.y << endl;
    cout << "*(obj1.p) : " << *(obj1.p) << endl;
    
    cout << "obj2.x : " << obj2.x << endl;
    cout << "obj2.y : " << obj2.y << endl;
    cout << "*(obj2.p) : " << *(obj2.p) << endl;
    
    return 0;
}
