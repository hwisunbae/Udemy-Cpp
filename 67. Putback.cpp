//  67. Putback - returning extracted character on stream

#include <iostream>

using namespace std;
int main() {
    /*
         putback - giving back char that was extracted from the stream
     
     */
    char c = cin.get(); // instead of using cin.peek();
    
    cin.putback(c);
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
