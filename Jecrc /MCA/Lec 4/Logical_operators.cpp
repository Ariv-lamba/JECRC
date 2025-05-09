#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // AND operator
    if (age >= 18 && age <= 60) {
        cout << "You are an adult.\n";
    }

    // OR operator
    if (age < 18 || age > 60) {
        cout << "You are either a minor or a senior citizen.\n";
    }

    // NOT operator
    bool isStudent = true;
    if (!isStudent) {
        cout << "You are not a student.\n";
    } else {
        cout << "You are a student.\n";
    }

    return 0;
}
