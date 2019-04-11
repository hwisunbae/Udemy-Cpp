//  65. Put - loading characters from cin stream directly to file

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    /*
         put(character to put on stream)
     */
    
    string txt = "thistextisconnected";
    
    
//    for(int i = 0; i <txt.length(); i ++){
//        cout.put(txt[i]).put(' ');
//    }
    
    ofstream file;
    file.open("sample.txt", ios::out | ios::binary);
    
    if(file.is_open()){
        
        char c;
        do {
            c = cin.get();
            
            file.put(c);
        }while(c != '.');
        
    } else cout << "file hasn't been open properly" << endl;
    
    return 0;
}
