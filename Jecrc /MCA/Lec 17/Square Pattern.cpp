#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i =0; i<n; i++){
		int x = i+1;
		for(int j=0; j<i+1; j++){
			cout << x <<" ";
			//x++;
		}
		x++;
		for(int j =0; j<n-1-i; j++){
			cout << x << " ";
			x++;
		}
		cout <<endl;
	}
	return 0;
}
