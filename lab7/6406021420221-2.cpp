#include<iostream>
using namespace std;
int main(){
        int book=0,toy=0,model=0,stationery=0;
       int sum_book=0,sum_toy=0,sum_model=0,sum_st=0;
       float sum = 0;
        cout << "Input Number of Book :";
        cin >> book;
        cout << "Input Number of Toy :";
        cin >> toy;
        cout << "Input Number of Model :";
        cin >> model;
        cout << "Input Number of Stationery :";
        cin >> stationery;
       
           sum_book = book*120;
           sum_toy = toy*80;
           sum_model = model*50;
           sum_st = stationery*15;

    sum = sum_book+sum_toy+sum_model+sum_st;

        if(sum >= 100000){
            sum = 1000+(sum*0.1);
        }else if(sum >= 10000 && sum <= 99999){
            sum = 1000+(sum*0.05);
        }else if(sum >= 5000 && sum <= 9999){
            sum = 1000;
        }else if(sum >= 1 && sum <= 4999){
            sum = 1000-(sum*0.1);
        }else if(sum == 0){
            sum = 1000*0.5;
        }else{
            cout << "what happend ";
        }
            cout << "Payment = " << sum;
            

    }