// 48. Convert constructor and overloading operators

#include <iostream>
#include "Integer.hpp"
using namespace std;

int main(){
    
//     int a = 40;
//     double b = 3.1;
//     cout << (double)a/b << endl;

    Integer a(50);
    a = 100;     // due to consturctor
    int b = a;   // due to operator int ()
    
    cout << a.getNr() << endl;
    cout << b << endl;
    cout << a + (Integer)b << endl;
    cout << (int)a + b << endl;
    
    b += a;
    cout << b << endl;
    cout << a.getNr() << endl;

}
