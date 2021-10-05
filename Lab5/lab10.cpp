#include<iostream>
#include<string>
using namespace std;
int main(){
    int income;
    cout << "Please enter your income : ";
    cin >> income;
    int Result;
    if(income > 4000000){
        Result = (income * 37)/100;
    }
    else if(income > 1000000){
        Result = (income * 30)/100;
    }
    else if(income > 500000){
        Result = (income * 20)/100;
    }
    else if(income > 100000){
        Result = (income * 10)/100;
    }
    else if(income <= 100000){
        Result = (income * 5)/100;
    }
    cout << "Your tax is : " << Result;
    }