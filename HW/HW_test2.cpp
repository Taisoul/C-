#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5,sum;
    cout << "Enter Num1 : ";
    cin >> num1;
    cout << "Enter Num2 : ";
    cin >> num2;
    cout << "Enter Num3 : ";
    cin >> num3;
    cout << "Enter Num4 : ";
    cin >> num4;
    cout << "Enter Num5 : ";
    cin >> num5;
    sum = (num1+num2+num3+num4+num5)/5;
    cout << "Result : " << sum;
    return(0);
    }