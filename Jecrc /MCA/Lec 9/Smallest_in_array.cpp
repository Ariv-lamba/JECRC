#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    int small= arr[0];
    
    for( int i =1; i<n; i++){
        if(arr[i]< small){
            cout << " now smallest in array is " << arr[i]<<endl;
            small = arr[i];
        }
    }
    
    cout << small << endl;
    

 
    return 0;
}
