#include<iostream>
using namespace std;
int main(){
        int year = 0;
        string text;
        cout << "Enter Year : ";
        cin >> year;
        if(year % 4 == 0 && year %100 != 0){
            text = " is a leap year ";
        }else if(year % 100 == 0 && year % 400 == 0){
            text = " is a leap year ";
        }else{
            text = " is not a leap year ";
        }
        cout << "Year " << year << text;
    }