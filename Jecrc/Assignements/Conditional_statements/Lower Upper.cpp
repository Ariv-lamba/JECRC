#include<iostream>
using namespace std;
int main() {
	char c;
	cin>> c;
	if(c-'a'>=0 && c-'a'<=26){
		cout << "lowercase";
	}
	else if(c-'A'>=0 && c-'A'<=26){
		cout << "UPPERCASE";
	}else{
		cout << "Invalid";
	}

	return 0;
}
