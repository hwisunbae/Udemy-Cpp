//  51. Virtual destructor
//  Farm.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-07-11.
//  Copyright © 2018 Hwisun Bae. All rights reserved.


#include "Farm.hpp"
#include <iostream>
using namespace std;


Animal::~Animal(){
    cout << "from base" << endl;
}
Dog::Dog(){
    sign = "D";
    voice = "hau";
}
Dog::~Dog(){
    cout << "from dog" << endl;
}
Cat::Cat(){
    sign = "Ca";
    voice = "meow";
}
Cat::~Cat(){
    
}
Cow::Cow(){
    sign = "Co";
    voice="Moo";
}
Cow::~Cow(){
    
}
