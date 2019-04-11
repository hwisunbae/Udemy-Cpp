//  66. Peek - peeking characters without extracting

#include <iostream>

using namespace std;
int main() {
    /*
        peek - looking at the char and not extracting
     
     */
    char c = cin.peek(); // instead of using cin.get();
    if ( c > '0' && c < '9' )
    {
        int num;
        cin >> num;
        
        cout << "number is " << num << endl;
    } else {
        
        string txt;
        cin >> txt;
        
        cout << "text is " << txt << endl;
    }
    
    return 0;
}
