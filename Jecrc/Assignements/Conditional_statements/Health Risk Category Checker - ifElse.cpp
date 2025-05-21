#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >>age;
    int bmi;
    cin >> bmi;
    int cc;
    cin >> cc;

    if(age>=60){
        if(bmi>=30){
            if(cc>=2){
                cout << "High Risk";
            }else{
                cout << "Moderate Risk";
            }
        }else{
            if(cc>=1){
                cout << "Moderate Risk";
            }else{
                cout << "Low Risk";
            }
        }

    }else if( age <60 && age >= 40){
        if(bmi>=25){
            if(cc>=2){
                cout << "Moderate Risk";
            }else{
                cout << "Low Risk";
            }
        }else{
            cout << "Low Risk";
        }
    }else{
        if(bmi>=28){
            if(cc>=1){
                cout << "Moderate Risk";
            }else{
                cout << "Low Risk";
            }
        }else{
            cout << "Very Low Risk";
        }

    }




    return 0;
}
