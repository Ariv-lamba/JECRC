#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    for( int row = 1; row <=n ; row++){
        if(row==1){
            for(int i =0; i< n-1; i++){
                cout << "  ";
            }
            for(int i =0; i<n; i++){
                cout << "* ";
            }
            cout <<endl;
        }
         if(row==n){
             for(int i =0; i<n; i++){
                cout << "* ";
            }
            for(int i =0; i< n-1; i++){
                cout << "  ";
            }
        }
        if(row>1 && row<n){
            for(int i =0; i< n-row; i++){
                cout << "  ";
            }
           cout << "* ";
           for(int i =0; i<n-2; i++){
               cout << "  ";
           }
           cout << "* ";
           
           for(int i =0; i< row-1; i++){
               cout << "  ";
           }
           
           
           cout << endl;
        }
    }
    
    return 0;
}
