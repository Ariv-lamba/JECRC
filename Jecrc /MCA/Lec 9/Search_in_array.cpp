#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    int target;
   cin>>target;
  
    int x  = 0;
    
    for( int i =1; i<n; i++){
        if(arr[i] == target){
            x = 1;
          break;
        }
    }
  if(x==0){
    cout << "element not found " <<endl;
  }else{
    cout << " Element found " <<endl;
  }
    
    return 0;
}
