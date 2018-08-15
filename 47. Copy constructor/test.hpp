//  47. Copy constructor
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

class Test {
public:
    int x;
    int y;
    int * p;
    Test(int, int, int);
    Test(const Test &); //copy consturctor needed for pointer
    ~Test();
};
#endif /* test_hpp */
