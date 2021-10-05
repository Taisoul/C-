#include<iostream>
#include<string>
using namespace std;
int main(){
    int num_m;
    cout << "Please enter your number of month : ";
    cin >> num_m;
    string ans;
    switch (num_m)
    {
    case 1 :
    ans = "January";
        break;
    
    case 2 :
    ans = "Febuary";
        break;
    
    case 3 :
    ans = "March";
        break;
    
    case 4 :
    ans = "April";
        break;
    
    case 5 :
    ans = "May";
        break;
    
    case 6 :
    ans = "June";
        break;
    
    case 7 :
    ans = "July";
        break;
    
    case 8 :
    ans = "August";
        break;
    
    case 9 :
    ans = "September";
        break;
    
    case 10 :
    ans = "October";
        break;
    
    case 11 :
    ans = "November";
        break;
    
    case 12 :
    ans = "December";
        break;
    default:
    ans = "Enter 1-12 only";
        break;
    }
    cout << "Your month is : " << ans;
    return(0);
    }