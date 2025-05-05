#include<iostream>
using namespace std;

int main() {
int n ;
cin>>n;

for( int row = 1; row <= n; row++){
   // cout << " i am in row no - " << row  <<endl;
    // stars;

    for(int i =0; i<row; i++){
        cout << "* ";
    }
    
    
    // space 
    for(int j =0; j<n-(row); j++){
        cout << "a ";
    }
    
    cout << endl;
}
return 0;

}
