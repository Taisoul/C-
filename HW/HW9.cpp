#include<iostream>
using namespace std;

int main(){
    int fish,tomato,fishpro,tomatopro,can;
    cout << "fish Num : ";
    cin >> fish;
    cout << "tomato Num : ";
    cin >> tomato;
    cout << "fish/can : ";
    cin >> fishpro;
    cout << "tomato/can : ";
    cin >> tomatopro;
    cout << "fish : " << fish <<"\t";
    cout << "tomato : " << tomato <<"\n";
    while(fish > 0  && tomato > 0){
        fish -= fishpro;
        tomato -= tomatopro;
        can++;
    }
        cout << "result can : " << can << "\n";
        cout << "remain fish : " << fish << "\n";
        cout << "remain tomato : " << tomato << "\n";
    return(0);
    }