//  62. Writing position pointer - seekp and tellp

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /*
     
     tellp - tell put - tell where is the putting pointer
     seekp - seek put - set writing pointer at specificed position
     
     seekp(how_many_bytes_from_the_flag, flag);
     
     possible flags;
     ios::beg
     ios::cur
     ios::end
     
     */
    
    ofstream file;
    
    file.open("sample.txt", ios::in | ios::binary);
    
    if(file.is_open()){
        
        string temp = "this is text about nothing";
        file << temp;
        
        cout << file.tellp() << endl;
        
        file.seekp(0, ios::beg);
        
        file << "T";
        
        file.close();
        
    } else {
        cout << "file hasn't been open properly" << endl;
    }
    
    
    
    return 0;
}
