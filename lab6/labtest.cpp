#include<iostream>
using namespace std;

int main(){
    int n,sum = 0,count = 0;
    cout <<"Enter Num : ";
    cin >> n;
        for(int i=1; i<=n; i++){
        // if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7)){
        //     continue;
        // }
        for(int j=1; j<=i; j++){
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
    cout << "\nSUM = " <<sum;
}