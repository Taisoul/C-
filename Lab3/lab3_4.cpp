#include <iostream>
using namespace std;

int main(){
    int y,m,x,c;
    cout<<"Num1 :";
    cin >> m;
    cout<<"Num2 :";
    cin >> x;
    cout<<"Num3 :";
    cin >> c;
    y = (((m*m)*(x*x))+(c*c));
    cout << "((m*x)+c) ^ 2"
     <<"\n";
    cout << y;
    return(0);

}
