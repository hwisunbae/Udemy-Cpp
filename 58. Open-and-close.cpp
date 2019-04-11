//  58. How to open and close files?

#include <iostream>
#include <fstream> //operating for file

using namespace std;

int main(){
    fstream myFile;
    
    myFile.open("test.txt");
    
    if(myFile.is_open()){
        
        cout << "this file has been open";
        
        myFile << "this is a sample text";
        myFile.close();
        
    }
    
    
    
    
    
    return 0;
}
