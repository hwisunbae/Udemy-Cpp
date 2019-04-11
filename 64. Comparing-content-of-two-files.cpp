//  64. Comparing content of two files

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool areFilesEqual(fstream *, fstream * );
int sizeOfFile(fstream *);

int main() {
    /*
     read(where to read, how many bytes to be read);
     memcmp - stands for memory compare
     */
    
    
    fstream file1, file2;
    file1.open("sample.txt", ios::in | ios::binary | ios::ate);
    file2.open("sample2.txt", ios::in | ios::binary | ios::ate);
    
    if(file1.is_open() && file1.is_open()){
        
        cout << "test" << endl;
        if(areFilesEqual(&file1, &file2)) {
            cout << "files are equal" << endl;
        } else {
            cout << "size of files are not equal" << endl;
        }
    
//        streampos fileOfSize = file.tellg();
//        char * buffer = new char[fileOfSize];
//
//        file.seekg(0, ios::beg);
//
//        file.read(buffer, fileOfSize);
//
//        cout << buffer << endl;
//
//        delete [] buffer;
    } else {
        cout << "file hasn't been open properly" ;
    }
    
    return 0;
}

bool areFilesEqual(fstream * f1, fstream * f2){
    int fileSize1 = sizeOfFile(f1);
    int fileSize2 = sizeOfFile(f2);
    
    if (fileSize1 == fileSize2){
        int BUFFER_SIZE;
        
        if(fileSize1 > 1024 ) BUFFER_SIZE = 1024;
        else BUFFER_SIZE = fileSize1;
        
        
        BUFFER_SIZE = fileSize1;
        
        char * f1Buffer = new char [BUFFER_SIZE];
        char * f2Buffer = new char [BUFFER_SIZE];
        
        do {
            f1->read(f1Buffer, BUFFER_SIZE);
            f2->read(f2Buffer, BUFFER_SIZE);
            
            if(memcmp(f1Buffer, f2Buffer, BUFFER_SIZE) != 0){
                cout << "more than one of the byte is different" << endl;
                delete [] f1Buffer;
                delete [] f2Buffer;
                return false;
                
            }
        } while(f1->good() && f2->good());
        
        
        delete [] f1Buffer;
        delete [] f2Buffer;
        
        return true;
    } else {
        cout << "size of files are not eqaul";
        return false;
    }
    

}
int sizeOfFile(fstream * file){
    file->seekg(0, ios::end);
    int size = file->tellg();
    
    file->seekg(0, ios::beg);
    return size;
}
