//
//  main.cpp
//  friendship
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include "test.hpp"
using namespace std;

int main() {
    Integer a(50);
    int b = a;
    a = 4; //Integer(int nr)
    //cout << a.getNumber() << endl;
    //cout << b << endl;
    //cout << a + (Integer)b << endl; //operator int ()
    
    a += b;
    cout << a.getNumber()<< endl;
    return 0;
}
