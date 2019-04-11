//  59. Stream's error flags
//  streamErrorFlags.cpp
//  WORK
//
//  Created by Hwisun Bae on 2018-08-05.
//  Copyright © 2018 Hwisun Bae. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /*
     bad() - badbit(1) - returns true if error such as writing letters to a read-only file (ios::in)
     fail() - failbit(4) - returns true if we try to assign string to integer while reading file
     
     eof() - eofbit(2) - returns true if the file reaches at the end of file
     
     1 - 001
     2 - 010
     4 - 100
     
     bitwise operator : & | ^
     
     good() - goodbit(0) - returns true if everything fine (if any of flags are false)
     
     rdstate() - ReaD State
     
     clear() - clear state
     */
    
    fstream file;
    file.open("test.txt", ios::in);
    if (file.is_open()){
//        1. bad()
//        //file << "good";
//        cout << file.bad();
//
//        file.clear();
//
//        string tmp;
//        file >> tmp;
//        cout << tmp;
        
        do {
            string buffer;
            file >> buffer;
            cout << buffer << endl;
        } while (!file.eof());
        
        cout << file.rdstate();
//        cout << file.fail();
//        cout << file.good();
        
    } else {
        cout << "file not open" << endl;
    }
    
    return 0;
}
