#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	for(int i =0; i<n; i++){
		int x = 1;
		for(int j=0; j<i+1; j++){
			if(i%2 == 0){
				if(j == 0 || j == i){
				cout << x;
			}else{
				cout << 1;
			}

			}else{

				if(j == 0 || j == i){
				cout << x;
			}else{
				cout << 0;
			}

			}
			
			// x++;
		}
		// for(int j =0; j<n-1-i; j++){
		// 	cout << "*";
		// }
		cout <<endl;
	}
	return 0;
}
