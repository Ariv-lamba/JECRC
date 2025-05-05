#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    
    int x = 1;
    cout << x <<endl;
    int curr =0;
    int y;
    if(n>1){
     y = 2;
     curr = 3;
    cout << y << " " << curr << endl;
    }
     x= y;
     y = curr;

    
    for( int row =3; row<=n; row++){
        for(int j = 0; j<row; j++){
            curr =  x+y;
            cout << curr << " ";
            x = y;
            y = curr;
        }
        cout << endl;
    }
    
   
    

    return 0;
}
