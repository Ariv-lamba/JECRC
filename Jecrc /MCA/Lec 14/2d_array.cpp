#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin>>n>>m;
    
    int arr[n][m];
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>> arr[i][j];
            count ++;
        }
    }
     for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
           cout <<  arr[i][j] << " ";
          
        }
        cout << endl;
    }

    return 0;
}
