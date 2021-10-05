#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Num1 :";
    cin >> y;
    cout<<"Num2 :";
    cin >> z;
    x = y + (3*z) - ((z+y)/(z-y));
    cout << "y + (3*z) - ((z+y)/(z-y))"
     <<"\n";
    cout << x;
    
    return(0);

}
