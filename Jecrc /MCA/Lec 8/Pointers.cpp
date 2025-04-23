
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int * p;
    p = &a;
    
    int * q = & a;
    
    cout << a <<endl;
    cout << p <<endl;
    cout << q <<endl;
    
    a = 15;
    cout <<a<<endl;
    
    *p = 20;
    cout << a <<endl;
    
    cout << *q << endl;
    
    return 0;
}
