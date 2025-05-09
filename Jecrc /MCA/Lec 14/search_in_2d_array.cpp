#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m ;
    cin>>m;
    int arr[n][m];
    
    for(int row = 0; row <n; row++){
        /// row traversAL 
        for( int col =0; col <m; col++){
            cin >> arr[row][col];
        }
    }
       for(int row = 0; row <n; row++){
        /// row traversAL 
        for( int col =0; col <m; col++){
           cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    // largest and smallest 
    
    int largest = arr[0][0];
    int smallest = arr[0][0];
    
    for(int row = 0; row<n; row++){
        for(int col =0; col<m; col++){
           if ( arr[row][col]>largest){
               largest = arr[row][col];
           }
           if( arr[row][col] < smallest ){
               smallest = arr[row][col];
           }
        }
    }
cout << " largest element is " << largest << endl;
cout << " smallest element is " << smallest << endl;
    
    
    // search 
    
    int x;
    cin >> x;
     
     int y = 8;
     bool flag = true;
     for(int row = 0; row<n; row++){
         for(int col = 0; col<m; col++){
             if(arr[row][col] == x){
                 cout << " element present" << endl;
                 y = 18;
                 flag = false;
                 break;
             }
         }
     } 
      
      if( flag ){
          cout << " element not found " << endl;
      }
        
  
    return 0;
}
