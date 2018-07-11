//
//  Farm.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-07-11.
//  Copyright © 2018 Hwisun Bae. All rights reserved.

//  50. Polymorphism, virtual functions, abstract classes
//  51. Virtual destructor

#include "Farm.hpp"
#include <iostream>
using namespace std;


Animal::Animal(){
    //voice = "default value";
}
Animal::~Animal(){
    cout << "base class" << endl;
}
Dog::Dog(){
    sign = 'D';
    voice = "wof";
}
Dog::~Dog(){
    cout << "sub-class" << endl;
}
Cat::Cat(){
    sign = 'C';
    voice = "meow";
}
Cat::~Cat(){
    cout << "sub-class"  << endl;
}
Cow::Cow(){
    sign = 'CO';
    voice = "mooo";
}
Cow::~Cow(){
    cout << "sub-class"  << endl;
}
