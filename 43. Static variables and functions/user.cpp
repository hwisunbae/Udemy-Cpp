//
//  user.cpp
//  USER
//
//  Created by Hwisun Bae on 2018-06-05.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include "user.h"
#include <iostream>

using namespace std;

int User::counter = 0 ;
User:: User(){
    counter++;
    id = counter;
    
}
User:: ~User(){
    
    
}
