//  63. Extracting characters from files

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    /*
     
     getline(where_to_store, how_many_char, delimeter) - extracts delimeter and delete it
     get(where_to_store, how_many_char, delimeter) - doesn't extracts delimeter and delete it
     ignore (how_many_char_extrated_and_ignore, delimeter) - extracts characters
     
     get(); -- get only one char
     
     */
    
    
    fstream file;
    file.open("sample.txt", ios::in | ios::binary);
    
    if(file.is_open()){
        
        char first, second;
        
        char buffer [50]; // char * buffer;
        
//        cin.getline(buffer, 50);
//        cout << buffer << endl;
        do {
//            how to get full first name and second initial
            file.getline(buffer, 50, ' ');

            second = file.get();
            file.ignore(40, '\n');

            cout << buffer << ' ' << second << endl;
            
//            how to get first and second intial
//            first = file.get();
//            file.ignore(40, ' ');
//
//            second = file.get();
//            file.ignore(40, '\n');
//
//            cout << first << ' ' << second << endl;
        } while(!file.eof());
        
        file.seekg(0);
        
        while (file.get(buffer, 50, '\n')) {

            file.ignore(1);
            cout << buffer << endl;

        } // = getline
    
        
    }else {
        cout << "file hasn't been open properly" << endl;
    }
    
    return 0;
}
