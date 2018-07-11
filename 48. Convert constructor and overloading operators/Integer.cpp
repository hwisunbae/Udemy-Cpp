//
//  Integer.cpp
//  
//
//  Created by Hwisun Bae on 2018-06-12.
//

#include "Integer.hpp"
#include <iostream>
using namespace std;


int Integer::getNr(){
    return this->nr;
}
Integer::Integer(){
    nr = 0;
}
Integer::Integer(int nr){
    this->nr = nr;
}
