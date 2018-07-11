//
//  position.hpp
//  position
//
//  Created by Hwisun Bae on 2018-06-07.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef position_hpp
#define position_hpp

class Position{
    int x, y;
public:
    Position (int, int);
    ~Position();
    void getPosition () const;
    void setPosition (int, int);
    friend void setX (Position&, int);
};

#endif /* position_hpp */
