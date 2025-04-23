
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int  hcf ( int a, int b){
    int ans = 1;
    for(int i = 2; i< a ; i++){
        if(a%i == 0 && b%i ==0){
        //    cout << i << endl;
            ans = i;
        }
    }
    return ans;
}
int main() {
    int x, y ;
    cin >> x>>y;
   int c = hcf(x, y);
   
   int lcm = (x*y)/c;
   cout << lcm;
    return 0;
}
