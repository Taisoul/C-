#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main(){
    float A;
    float B;
    float C;
    float Sum1;
    float Sum2;
    cout << "Enter Number1 : ";
    cin >> A;
    cout << "Enter Number2 : ";
    cin >> B;
    cout << "Enter Number3 : ";
    cin >> C;
    // Sum1 = (-B+((B*B)-4*(A*C)))/(2*(A));
    Sum1 = sqrt((B*B)-(4*(A*C)));
    Sum1 = -B+Sum1;
    Sum1 = Sum1/(2*A);
    // Sum2 = (-B-(sqrt((B*B)-4*(A*C))))/(2*(A));
    Sum2 = sqrt((B*B)-(4*(A*C)));
    Sum2 = -B-Sum2;
    Sum2 = Sum2/(2*A);
    cout << "Answer of  " << A << "X^2" << " + " << B << "X" << " + " << C <<" = 0\n";
    cout << "Answer 1 = "<< setprecision(2)<<Sum1<<"\n";
    cout << "Answer 2 = "<< setprecision(2)<<Sum2<<"\n";
    
    
}