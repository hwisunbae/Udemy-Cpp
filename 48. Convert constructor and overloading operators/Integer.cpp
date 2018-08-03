//  48. Convert constructor and overloading operators
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


Integer::Integer(int nr){
    //convert constructor
    this->nr = nr;
}
Integer::operator int(){
    return this->nr;
}

//int Integer::operator += (int nr){
//    this->nr += nr;
//    return this->nr;
//}

int Integer::operator += (Integer& obj){
    this->nr = obj.nr + this->nr;
    return this->nr;
}
