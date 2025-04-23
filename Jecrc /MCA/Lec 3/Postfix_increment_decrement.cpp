#include <iostream>
using namespace std;
int main() {
    int num = 5;
    int result;

    result = num--;
    cout << "Postfix num--: " << result << ", num: " << num << endl;

    result = 10;
    result++;
    cout << result <<endl;
  
    return 0;
}
