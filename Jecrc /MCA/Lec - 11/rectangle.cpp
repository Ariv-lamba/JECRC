
#include<iostream>
using namespace std;

int main() {
int n ;
cin>>n;

for(int row = 1; row <=n; row++){
    if(row == 1 ||  row == n){
        for(int i =0; i<2*n; i++){
            cout << "* ";
        }
    }else{
        cout << "* ";
        for(int i =0; i<(2*n-2); i++){
            cout << "  ";
        }
        cout << "* ";
    }
    
    cout << endl;
}
return 0;

}
