#include<iostream>
using namespace std;

int main(){
    int n = 6,min;
    int a[] = {5,2,8,9,7};
    for (int i = 1; i <= n-1; i++)
    {
        min = i;
        for (int x : a) cout << x;
        cout << "\n";
        for (int j = i+1; j <= n; j++)
        {
            if(a[min] > a[j]){
                min=j;
            }
        }
        if(i > min){
            cout << "test";
            int r = a[i];
            a[i] = a[min];
            a[min] = r;
        }
    }
    return(0);
}