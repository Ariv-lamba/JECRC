#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x = 0;
	int y = 1;
	int curr = x+y;
	cout << x << endl;
	if(n>=2){
		cout << y << " " << curr <<endl;
	}
	x = y;
	y = curr;

	for(int i =2; i<n; i++){
		//int x = 1;
		for(int j=0; j<i+1; j++){

			curr = x+y;
			cout << curr << " ";
			x = y;
			y = curr;
			// cout << x;
			// x++;
		}
		// for(int j =0; j<n-1-i; j++){
		// 	cout << "*";
		// }
		cout <<endl;
	}
	return 0;
}
