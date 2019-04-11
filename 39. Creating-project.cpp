//
//  Creating_project.cpp
//  work
//
//  Created by Hwisun Bae on 2018-09-12.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

//  39. Creating project, external execution of program

#include "Creating_project.hpp"
#include <iostream>

using namespace std;

void showHelp();

int main(int argc, char * argv[]) {
    //argument counter -argc
    //argument value - argv
    
    for (int i = 0; i < argc ; i++){
        if (strcmp(argv[i], "aa") == 0 && i == 1){
            showHelp();
        }
    }
    
    
    /*
    char a[] = {'a', 'b', 'c', 'd' , '\0'};
    char *b = "this is b";
    char *c[] = {"good", "bad", "excellent" };
//    cout << a << endl;
//    cout << b << endl;
//    cout << c[0] << endl;
    
    char x[] = "c"; // name of ARRAY is A POINTER
    char *y = "c";
//    cout << (x==y) << endl;
//    cout << (&x[0]==&y[0]) << endl;
    cout << (strcmp(x, y) == 0) << endl;
    // returns 0 if the variable is equal
    // returns 1 if x is greater
    // retrns -1 if x is lower
    
    string a1 = "lala";
    string a2 = "lala";
    cout << (a1==a2) << endl;
    */
    return 0;
}

void showHelp(){
    cout << "HElP" << endl;
}
