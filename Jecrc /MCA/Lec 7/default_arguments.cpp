#include <iostream>
using namespace std;


int fun(int a = 0, int b = 0, int c=0 , int dd = 0){
    int d = a+b+c+dd;
    return d;
}


int main() {
    int a = 10;
    int b = 15;
   cout <<  fun(a, b);
   cout << endl << fun(5, 7, 8);
   

    return 0;
}
