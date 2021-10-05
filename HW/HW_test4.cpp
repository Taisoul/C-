#include<iostream>
using namespace std;

int main(){
    int price,discount,sum;
    cout << "Enter Price : ";
    cin >> price;
    cout << "Enter Discount : ";
    cin >> discount;

    sum = (price*discount)/100;
    sum = price-sum;
    cout << "Result : " << sum;
    return(0);
    }