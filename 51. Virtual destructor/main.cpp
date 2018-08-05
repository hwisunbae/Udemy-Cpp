//  51. Virtual destructor
//  main.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-07-11.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//



#include <iostream>
#include "Farm.hpp"
using namespace std;

void animalVoice(Animal*);
int main(){
    
    Animal * dog = new Dog;
    // problem occurs when the base class is referring to the derived class
    // Animal needs to have a virtual destructor
    animalVoice(dog);
    delete dog;
    

//    cout << animal.getVoice() << endl;
//    cout << dog.getVoice() << endl;
//    cout << cat.getVoice() << endl;
//    cout << cow.getVoice() << endl;
    
//    Animal * ptrAni = nullptr;
//    ptrAni = &dog;
//    cout << dog.getVoice() << endl;

    return 0;
}
void animalVoice(Animal* ani){
    cout << ani->getVoice() << endl;
}
