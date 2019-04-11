//  60. Stream's error flags

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    /*
     
     1 - bad() - returns true if error (ios::in -READING)
     4 - fail() - return true if assign string to int while reading file
     2 - eof() - End Of File - retuns true if the file opened till the end
     0 - good() - returns true if fine or above both flags false
     
     1- 001
     2- 010
     4- 100
     
     bitwise operator : & | ^
     
     ^
     110 - 6
     010 - 2
     100 - 4
     
     ^
     010 - 2
     010 - 2
     000 - 0
     
     rdstate() = ReaD state
     clear() - clear state
     */
    
    
    fstream file;
    
    file.open("sample.txt", ios::in);
   
    if(file.is_open()){
        
        string buffer;
        
        do {
            file >> buffer;
            
            cout << buffer;
        } while (!file.eof());
        
        cout << file.rdstate();
        
        cout <<(file.rdstate() ^ ifstream::eofbit);
        
        if( (file.rdstate() ^ ifstream::eofbit) == 4)
            file.clear();
        
        cout << file.rdstate();
        
        
//        file << "sample A";
//
//        if ( file.bad() ){
//
//            string buffer;
//            file >> buffer;
//            cout << buffer;
////            cout << file.fail() << endl;
//            cout << file.good();
//
//        }
        
        
    }
    
    return 0;
}

