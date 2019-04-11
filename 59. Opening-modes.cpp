//  59. File opening modes

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream myFile;
    
    myFile.open("sample.txt", ios::out | ios::app);
    
    /*
     
     ios::in - INPUT - READING
     ios::out - OUTPUT - WRITE TO FILE
     
     if there's no file, create it
     if there's a file, truncate it
     
     ios::turnc - TRUNCATE - cutting everything inside
     ios::ate - AT THE END - sets pointer at the end of file
     - the place of pointer can be changed
     
     ios::app - APPEND - the content is added at the end of file
     ios::binary - open the file as a binary file
     
     
     DEFAULT MODE (FLAGS)
     fstream -- ios::in | ios::out
     ifstream -- ios::in
     ofstream -- ios::out
     
     */
    
    
    if(myFile.is_open()){
        
        cout << "has been open" << endl;
        
        myFile << "sample text \n ";
        myFile << "sample text \n";
        
        myFile.close();
        
    }
    
    return 0;
}
