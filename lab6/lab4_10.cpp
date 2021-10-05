#include<iostream>
using namespace std;
int main(){
    int max = 5;
    int i = 0;
    float sum = 0;
    cout << "enter "<< max << " numbers \n";
    while(i  < max) {
    float Value;
    cin >> Value;
    sum += Value;
    i++;
    }
    float Average = sum / i;
    cout << "Average : "<< Average;
    return(0);
    }