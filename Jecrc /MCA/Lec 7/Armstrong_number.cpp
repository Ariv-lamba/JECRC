// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int count_digits(int nums){
    // working 
    int ans = 0;
    while(nums>0){
        ans++;
        nums = nums/10;
    }
    return ans;
}

bool fun( int nums, int x , int y ){
    int ans = 0;
    
    while(nums>0){
        int ln = nums%10;
        int check = 1;
        for(int i =0; i<x; i++){
            check = check * ln;
        }
        ans +=  check;
        nums = nums/10;
    }
    
    if( ans == y)return true;
    return false;
}

int main() {
    
 int nums;
 cin >> nums;
 int y = nums;
 int x =  count_digits(nums);
 
 bool flag = fun(nums, x, y);
 cout << flag;

    return 0;
}
