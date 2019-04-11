//  61. Reading position pointer - seekg and tellg

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    /*
     
     tellg - tell get - tell where is the reading pointer
     seekg - seek get - set reading pointer at specified pointer
     
     seekg(how_many_bytes_from_the_flag, flag);
     
     possible flags;
     ios::beg - begin -> set from the beginning
     ios::end - set at the end
     ios::cur - set from the current place
     
     */
   
    ifstream file;
    
    file.open("sample.txt", ios::in | ios::binary);
    
    if(file.is_open()){
        
        string buffer;
        
        file.seekg(0, ios::end);
        
        streampos sizeOfFile = file.tellg();
        
        file.seekg(0, ios::beg);
        
        cout << "the size of the file is "<< sizeOfFile << " byte" << endl;
        
        do {
            file >> buffer;
            
            cout << buffer << endl;
        } while (!file.eof());
        
        
        
        if( (file.rdstate() ^ ifstream::eofbit) == 4) {
            file.clear();
            
//            file.seekg(0, ios::beg);
            
            cout << file.tellg() << endl; //108
            
            file >> buffer;

            cout << buffer;
        }
    
    } else {
        cout << "the file hasn't been open properly" << endl;
    }
    
    return 0;
}

