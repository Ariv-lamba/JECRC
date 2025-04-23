#include <iostream>
using namespace std;

int fun(int a , int b){
    int c = a+b;
    return c;
}
int fun(int a, int b, int c){
    int d = a+b+c;
    return d;
}
bool fun(int a, int b){
    if(a>b)return true;
    return false;
}


int main() {
    int a = 10;
    int b = 15;
   cout <<  fun(a, b);
   cout << endl << fun(5, 7, 8);
   

    return 0;
}
