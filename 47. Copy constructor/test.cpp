//  47. Copy constructor
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "test.hpp"
#include <iostream>

using namespace std;

Test::Test(int x , int y, int value){
    this->x = x;
    this->y = y;
    this->p = new int (value);
}
Test::~Test(){
    delete p;
}

//  explicit way to copy constructor
Test::Test(const Test & obj){
    this->x = obj.x;
    this->y = obj.y;
    this->p = new int (*(obj.p));
}

