//
//  test.hpp
//  friendship
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

class Integer {
    int nr;
public:
    Integer() { };
    Integer(int );
    int getNumber ();
    operator int ();
    int operator+= (Integer);
};

#endif /* test_hpp */
