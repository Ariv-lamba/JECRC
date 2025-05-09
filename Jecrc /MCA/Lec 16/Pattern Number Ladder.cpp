#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x = 1;
	for(int i =0; i<n; i++){
		
		for(int j=0; j<i+1; j++){
			cout << x <<'\t';
			x++;
		}
		// for(int j =0; j<n-1-i; j++){
		// 	cout << "*";
		// }
		cout <<endl;
	}
	return 0;
}
