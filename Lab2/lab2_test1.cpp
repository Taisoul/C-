#include<iostream>
using namespace std;

int main(){
    float Num1;
    float Num2;
    cout<<"Enter Number1 : ";
    cin>> Num1;
    cout<<"Enter Number2 : ";
    cin>> Num2;

    cout<< "Result of\n";
    cout<< Num1 <<"  +  "<< Num2 <<"  =  "<<Num1+Num2<<"\n";
    cout<< Num1 <<"  -  "<< Num2 <<"  =  "<<Num1-Num2<<"\n";
    cout<< Num1 <<"  *  "<< Num2 <<"  =  "<<Num1*Num2<<"\n";
    cout<< Num1 <<"  /  "<< Num2 <<"  =  "<<Num1/Num2<<"\n";
    cout<< Num1 <<"  %  "<< Num2 <<"  =  "<<(Num1*Num2)/100<<"\n";


}