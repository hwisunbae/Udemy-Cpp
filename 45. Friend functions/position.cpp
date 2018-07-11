//
//  position.cpp
//  position
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "position.hpp"
#include <iostream>

using namespace std;

Position::Position (int x, int y){
    this->x = x;
    this->y = y;
}
Position::~Position(){
    
}

void Position::getPosition () const{
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}

void Position::setPosition (int x, int y ){
    this->x = x;
    this->y = y;
}

