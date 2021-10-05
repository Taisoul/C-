#include<iostream>
using namespace std;

int main(){
    int A,B;
    cout << "Enter value A and B\n";
    cin >> A >> B;
    cout << "A : "<< A <<"\tB : "<< B <<"\n";
    if(A == B) {
        cout << "A and B values are equal\n";
    }
    if(A > B) {
        cout << "A values > values B\n";
    }
    if(A < B) {
        cout << "A values < values B\n";
    }
}