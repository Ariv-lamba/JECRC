#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i =0; i<n; i++){
		int x = 1;
		for(int j=0; j<n-i; j++){
			cout << x << " ";
			x++;
		}
		for(int j =0; j<i; j++){
			cout << "* ";
		}

		// component 3 should be add here 

		//i = 2 -> 1 star i = 3 -> 2 star

		for(int k = 1; k<i; k++){
			cout << "* ";
		}



		cout <<endl;
	}
	return 0;
}
