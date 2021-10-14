#include<iostream>
using namespace std;

int main(){
    int a[] = {5,4,3,2,1};
    int flag = 1;
    int n = 5;
    int e = n-1;
    while(flag = 1){
        flag = 0;
        for (int j = 1; j <= e; j++)
        {
            if(a[j] > a[j+1]){
                int temp = 0;
                a[j] = temp;
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        cout << a[j];
        }
        e = e-1;
        cout << "\n";
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << "\n";
    // }


   
    
    
    
    return(0);
}