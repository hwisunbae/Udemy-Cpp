//
//  test.cpp
//  friendship
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "test.hpp"
#include <iostream>

using namespace std;

Integer::Integer(int nr){
    this->nr = nr;
}

int Integer::getNumber(){
    return nr;
}

Integer::operator int (){
    return this->nr;
}

int Integer::operator+= (Integer o){
    this->nr = o.getNumber() + this->nr;
    return this->nr;
}
