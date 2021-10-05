#include<iostream>
using namespace std;
int main (){
    int num1,num2,count,sum;
    bool flag = true;
        cout << "Enter Number1 : ";
        cin >> num1;
        cout << "Enter Number2 : ";
        cin >> num2;
        if(num1 < num2){
        flag = false;
        }
        else{
        cout << "Number1 more than Number2.\n";
        }
    for(int i=num1; i<=num2; i++){
        for(int j=num2; j<=i; j++){
            if(j%1 == 0 ){
                if(i%j == 0)
                count = count + 1;
            }
        }
        if(count == 2){
        sum = i+sum;
        cout << i <<" ";
        }
        count = 0;
    }


    return(0);
    
}