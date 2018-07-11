//
//  main.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-07-11.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

//  50. Polymorphism, virtual functions, abstract classes
//  51. Virtual destructor

#include <iostream>
#include "Farm.hpp"
using namespace std;

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);

int main(){
    /*
    // Animal animal; // became abstract
    Dog dog;
    Cat cat;
    Cow cow;
    
    cout << animal.getVoice() << endl;  //deafult value
    cout << dog.getVoice() << endl;     //wof D
    cout << cat.getVoice() << endl;     //meow C
    cout << cow.getVoice() << endl;     //mooo O
    */
    //voiceOfAnimal(&dog);
    /*
    Animal * p;
    p = &dog;
    cout << p->getVoice() << endl; // wof without virtual
    */
    
//    Dog * dog = new Dog;
//    delete dog;
    
    Animal * dog = new Dog;
    delete dog;
    
    
    return 0;
}
void voiceOfAnimal(Animal * a){
    cout << a->getVoice() << endl;
}
void voiceOfAnimal(Animal & a){
    cout << a.getVoice() << endl;
}
