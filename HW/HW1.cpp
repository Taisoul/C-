#include<iostream>
using namespace std;

int main(){
    int fish,tomato,can;
    fish = 600;         //จำนวนปลา
    tomato = 200;       //จำนวนมะเขือเทศ
    int fishpro = 3;    //จำนวนปลา/กระป๋อง
    int tomatopro = 2;  //จำนวนมะเขือเทศ/กระป๋อง
    cout << "fish : " << fish <<"\t";
    cout << "tomato : " << tomato <<"\n";
    int i,can_fish,can_tomato;
    for(i=fishpro;i<=fish;i+=fishpro){
        can_fish++;
    }
    for(i=tomatopro;i<=tomato;i+=tomatopro){
        can_tomato++;
    }
    if(can_fish < can_tomato){
        can = can_fish;
    }else{
        can = can_tomato;
    }
    cout << " can : " << can;
    return(0);
    }