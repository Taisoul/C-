#include<iostream>
using namespace std;

int main(){
    int p;
    cin >> p;
    int many[p];
    for (int i = 0; i < p; i++)
    {
        cin >> many[i];
    }
    cout << "=================\n";
    for (int j = 0; j < p; j++)
    {
        cout << many[j] <<"\n";
    }
    return(0);
    }