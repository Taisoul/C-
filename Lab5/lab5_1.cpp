#include<iostream>
using namespace std;

int main(){
    string test,ans;
    cout << "Enter num\n";
    cin >> test;
    cout << "Num : "<< test <<"\n";
    if(test >="0" && test <="9" ) {
        ans = "Num";
    }
    else {
        ans = "Not Num";
    }
    cout << ans;
    return(0);

}