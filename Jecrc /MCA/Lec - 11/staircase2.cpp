

#include<iostream>
using namespace std;

int main() {
int n ;
cin>>n;

for(int row = 0; row<n; row++){
    
  // cout << " i am in row number -> " << row << endl;
  //int x = 1;
  for(int i =0;  i< row+1; i++){
    int x = 1;
      cout <<  x<< " ";
      x++;
  }
    cout << endl;
    
    
}



return 0;

}
