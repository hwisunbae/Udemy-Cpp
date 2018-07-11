//
//  user.hpp
//  USER
//
//  Created by Hwisun Bae on 2018-06-05.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#ifndef user_hpp
#define user_hpp

class User {
private:
    int id;
    static int counter;
public:
    User();
    ~User();
    int getId() { return id; }
    static int getCounter() { return counter;}
};
#endif /* user_hpp */
