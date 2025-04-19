#include <iostream>
using namespace std;


void swap ( int a, int b){
    int c = a;
    a = b;
    b = c;
    cout << a<< " " <<b <<endl;
}
int main() {
    int a = 10;
    int b = 15;
    swap(a, b);
    cout << a << " "<<b<<endl;
    return 0;
}
