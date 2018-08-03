//  48. Convert constructor and overloading operators
//  Integer.hpp
//  
//
//  Created by Hwisun Bae on 2018-06-12.
//

#ifndef Integer_hpp
#define Integer_hpp

class Integer {
    int nr;
public:
    Integer() { };
    Integer(int = 0); //convert constructor
    int getNr();
    operator int();
//    int operator += (int);
    int operator += (Integer& );
};

#endif /* Integer_hpp */
