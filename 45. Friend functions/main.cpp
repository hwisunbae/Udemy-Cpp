//
//  main.cpp
//  position
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include "position.hpp"
using namespace std;

void setX (Position&, int);

int main() {
    Position dog(10, 50);
    dog.getPosition();
    setX (dog, 1111);
    dog.setPosition(20, 20);
    dog.getPosition();
    
    const Position house(100,100);
    
    house.getPosition();
    //house.setPosition(400, 4000);
    //house.getPosition();
    return 0;
}

void setX (Position& obj, int value){
    obj.x = value;
}
