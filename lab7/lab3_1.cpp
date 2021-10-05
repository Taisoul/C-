#include<iostream>
using namespace std;
int main(){
    int killo = 0,price = 0;
    cin >> killo;
    if(killo >= 1){
        price = 40;
    }
    if(killo >= 2 ){
        if(killo <= 10){
            price += ((killo-1)*5);
        }else{
            price += 45;
        }
    }
    if(killo >= 11 ){
        if(killo <= 15){
            price += ((killo-10)*4);
        }else{
            price += 20;
        }
    }
    if(killo >= 16 ){
        if(killo <= 20){
            price += ((killo-15)*3);
        }else{
            price += 15;
        }
    }
    if(killo >= 21){
        price += ((killo-20)*2);
    }

    cout << price;
}