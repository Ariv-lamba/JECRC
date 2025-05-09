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
       for(int i =0; i< (2*n)-2*row; i++){
           cout <<  "  ";
       }
  
           int y =row;
       for(int i =1; i<=row; i++){
           cout << y<< " ";
           y--;
       }
       cout << endl;
   }
    return 0;
}
