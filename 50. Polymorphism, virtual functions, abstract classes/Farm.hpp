//
//  Farm.hpp
//  WORK
//
//  Created by Hwisun Bae on 2018-07-11.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

//  50. Polymorphism, virtual functions, abstract classes
//  51. Virtual destructor

#ifndef Farm_hpp
#define Farm_hpp
#include <iostream>

using namespace std;
class Animal {
protected:
    string voice;
public:
    Animal();
    virtual ~Animal();
    virtual string getVoice () = 0;
};

class Dog : public Animal {
    string sign;
public:
    Dog();
    ~Dog();
    string getVoice () {return voice + ' ' + sign;}
};
class Cat : public Animal {
    string sign;
public:
    Cat();
    ~Cat();
    string getVoice () {return voice + ' ' + sign;}
};
class Cow : public Animal {
    string sign;
public:
    Cow();
    ~Cow();
    string getVoice () {return voice + ' ' + sign;}
};

#endif /* Farm_hpp */
