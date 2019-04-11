//
//  Exceptions.cpp
//  work
//
//  Created by Hwisun Bae on 2018-09-12.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

//  54. Exceptions - handling exceptions


#include "Exceptions.hpp"
#include <iostream>
using namespace std;

class DivisionByZeroException {
    
};
double division(double a, double b) {
    if (b == 0) throw b;
    return a/b;
}
int main(){
    double result;
    try {
        result = division(3, 0);
        cout << "here is the result "<< result << endl;
        
//        if ( a == 50) throw a;
//        cout << "here other codes" << endl;
    }
    catch(int e){
//        cout << "A cannot be eqaul to " << a << endl;
    }
    catch(...){
        cout << "be invoked" << endl;
    }
    return 0;
}
