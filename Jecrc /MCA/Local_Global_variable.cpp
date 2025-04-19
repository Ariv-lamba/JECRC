// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int gv = 1;
int  swap(int c, int d ){
 
  gv++;
  cout << gv<<endl;
  int temp = c+d;
  return temp;
}

int main() {
    int x = 10;
    int y = 15;
    int e = 16;
    int ok = swap(x, y);
     int okkk = swap(x, y);
      int okk = swap(x, y);
    cout << ok << " "<<gv;
    return 0;
}
