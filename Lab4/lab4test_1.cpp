#include<iostream>
using namespace std;

int main(){
    int score;
    cout <<"Enter score : ";
    cin >> score;
    if(score >= 50){
        cout <<"You Pass";
    }else{
        cout <<"Your failed!!!";
    }
    return(0);
}