#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cout << "Please enter your num : ";
    cin >> num;
    string ans;
    if(num > 0){
        ans = "Number is positive";
    }
    else if(num < 0){
        ans = "Number is negative";
    }
    else{
        ans = "Number is zero";
    }
    cout << ans;
    }