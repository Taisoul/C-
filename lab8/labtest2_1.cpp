#include <iostream>
using namespace std;
int main() {
    
    int salary = 0,hour = 0,ot = 0;
    char chk;

    cout << "Enter Salary : ";
    cin >> salary;
    do
    {
    cout << "Late (Y/N) : ";
    cin >> chk;
    switch (chk)
    {
    case 'N':
    case 'n':
        salary += 1000;
        break;
    case 'Y':
    case 'y':
        salary = salary;
        break;
    default:
    cout << "*** (Y/N Only) ***\n";
        break;
    }
    } while (chk != 'Y' && chk != 'N' && chk != 'y' && chk != 'n');
    do
    {
    cout << "Over Time Hour (Y/N) ";
    cin >> chk;
        switch (chk)
    {
    case 'Y':
    case 'y':
        cout << "Enter OT Hour : ";
        cin >> ot;
        salary = salary + (ot * 200);
        break;
    case 'N':
    case 'n':
        salary = salary;
        break;
    default:
    cout << "*** (Y/N Only) ***\n";
        break;
    }
    } while (chk != 'Y' && chk != 'N' && chk != 'y' && chk != 'n');
    cout << "Salary : " << salary <<"\n";

}
