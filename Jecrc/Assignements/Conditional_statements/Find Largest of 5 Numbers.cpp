#include<iostream>
using namespace std;
int main () {
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;
	int maxi = a;
	maxi = max(maxi, b);
	maxi = max(maxi, c);
	maxi = max(maxi, d);
	maxi = max(maxi, e);
	cout << maxi << endl;

	return 0;
}
