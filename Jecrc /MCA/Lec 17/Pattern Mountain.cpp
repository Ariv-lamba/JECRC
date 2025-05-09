// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n ;
   cin>>n;
   
   for(int row = 1; row<=n; row++){
       // 1st part 
       int x = 1;
       for(int i =1; i<=row; i++){
           cout << x<< " ";
           x++;
       }
       // 2nd space 
       for(int i =0; i< (2*n-1)-2*row; i++){
           cout <<  "  ";
       }
       
       // 3rd part
       int y, k;
       if(row != n){
           y = row;
           k = 1;
       }else{
           y = row-1;
           k = 2;
       }
           
       for(int i =k; i<=row; i++){
           cout << y<< " ";
           y--;
       }
       cout << endl;
   }
   
   // last row ??   4 -> 7  1 2 3 4, 321
   
    //  int x = 1;
    // for(int col = 1; col<= 2*n-1; col ++ ){
    //     if(col<n){
    //           cout << x << " ";
    //             x++;
    //     }else{
    //         cout << x << " ";
    //         x--;
    //     }
      
    // }
   
   

    return 0;
}
