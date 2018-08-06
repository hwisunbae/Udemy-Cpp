//  56. Streams - what is input and output
//  PUT IN from a keyboard  -source (entrance)
//  PUT OUT into a file     -destination (exit)

//  57. How to open and close files?

//  58. File opening modes


//  Created by Hwisun Bae on 2018-08-05.
//  Copyright © 2018 Hwisun Bae. All rights reserved.

#include <iostream>
#include <fstream>

int main() {
    
    std::fstream myFileHandler;
    /*
    myFileHandler.open("input2.txt", std::ios::out | std::ios::ate | std::ios::in);
    add more text
    without ios::in -> remove all and add text
     */
    
    myFileHandler.open("input2.txt", std::ios::out | std::ios::ate | std::ios::in);
    
    /*
     ios::in - INPUT - READING
     ios::out - OUTPUT - WRITE INTO A FILE
        if no file -> create it,
        if yes file -> truncate unless ios::in flag
     ios::trunc
     ios::ate - At The End - set pointer at the end of file - the place of pointer can be changed in the mode (ios::out and ios::in)
     ios::app - APPEND  - content is always appended at the end of file - impossible to remove content and change the pointer
     ios::binary  - open file as a binary file
     */
    
    /*
     DEFALUT MODE (FLAGS)
     fstream - ios::in | ios::out
     ifstream - ios::in
     ofstream - ios::out
     */
    
    if (myFileHandler.is_open()){
        std::cout << "this file has been open" << std::endl;
        myFileHandler << "this is the sample text\n";
        myFileHandler << "this is the sample text\n";
        myFileHandler.close();
    } else {
        std::cout << "this file hasn't been open" << std::endl;
    }

    
    
    return 0;
}
