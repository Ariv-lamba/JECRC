// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool factors(int nums){
    for(int i =2; i<nums; i++){
        if(nums%i == 0){
           // cout << i << " ";
           return false;
        }
    }
    return true;
}
int main() {
    int x ;
    cin >> x;
   cout << factors(x);
    return 0;
}
