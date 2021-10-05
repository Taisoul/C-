#include <iostream>
using namespace std;

int main(){
    int A=12,B=3,C=6,D=2,F;
    bool T = true;
    F = A+C/D-B^2;
    cout << F <<"\n";
    F = (A+B)%C;
    cout << F <<"\n";
    F = B%C+D*A;
    cout << F <<"\n";
    F = A<B&&C>=D;
    cout << F <<"\n";
    F = T || C<=B+D;
    cout << F <<"\n";
    F = A-C == B*D || T && D % B !=D;
    cout << F <<"\n";
    return(0);

}
