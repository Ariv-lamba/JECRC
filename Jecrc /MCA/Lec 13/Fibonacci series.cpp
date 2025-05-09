// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int n ;
cin>> n;

int x =1, y =1, curr;
cout << x<< " ";
if(n>=2){
    cout << y<< " ";
}
for(int i =3; i<=n; i++){
    curr = x+y;
    cout << curr << " ";
    x=y;
    y = curr;
}
    return 0;
}
