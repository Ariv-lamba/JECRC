// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int n ;
cin>> n;
for(int row = 1; row<= n; row++){
  //  cout << " you are in row no " << row  << endl;
    
    // component 3.
    if( row == (n+1)/2){
        for(int i =0; i<n; i++){
            cout << "* ";
        }
        cout <<endl;
    }
    
    // component 1 
    
    if(row == 1){
        cout << "* ";
        for(int i = 0; i<(n-3)/2; i++){
            cout << "  ";
        }
        for(int i =0; i<(n+1)/2; i++){
            cout << "* ";
        }
        cout << endl;
    }
    
    //component 5 
    
     if(row == n){
         for(int i =0; i<(n+1)/2; i++){
            cout << "* ";
        }
        for(int i = 0; i<(n-3)/2; i++){
            cout << "  ";
        }
        cout << "* ";
        
        
        cout << endl;
    }
    
    
    // component // 2
if( row >1 &&  row < (n+1)/2 ){
    cout << "* ";
    for(int i =0; i<(n-3)/2; i++){
        cout << "  ";
    }
    cout << "* ";
    for(int i =0; i<(n-1)/2; i++){
        cout << "  ";
    }
    cout << endl;
}
  
  
      // component // 2
if( row >(n+1)/2 &&  row < n ){
     for(int i =0; i<(n-1)/2; i++){
        cout << "  ";
    }
    cout << "* ";
    for(int i =0; i<(n-3)/2; i++){
        cout << "  ";
    }
    cout << "* ";
    cout <<endl;
   
}
   
}

    return 0;
}
