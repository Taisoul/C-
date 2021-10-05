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
    int i,can_fish,can_tomato;
    int remain_fish;
    int remain_tomato;
    for(i=fishpro;i<=fish;i+=fishpro){
        can_fish++;
    }
    for(i=tomatopro;i<=tomato;i+=tomatopro){
        can_tomato++;
    }
     if(can_fish < can_tomato){
         can = can_fish;
         remain_fish = can_fish*fishpro;
         remain_fish = fish-remain_fish;
         remain_tomato = can*tomatopro;
         remain_tomato = tomato-remain_tomato;
     }else{
         can = can_tomato;
         remain_fish = can*fishpro;
         remain_fish = fish-remain_fish;
         remain_tomato = can_tomato*tomatopro;
         remain_tomato = tomato-remain_tomato;
     }
        cout << "result can : " << can << "\n";
        cout << "remain fish : " << remain_fish << "\n";
        cout << "remain tomato : " << remain_tomato << "\n";
    return(0);
    }