#include <iostream>
using namespace std;
int main() {
    int money = 0;
    int money_mom = 0;
    int income = 0;
    int day = 0; 
    int remain = 0;
    cout << "mom give dee money : ";
    cin >> money_mom;
    
    do
    {
    money = money_mom;
    } while (remain <= day);
        day++;
        income++;
        money += income;
        remain += money;
        remain -= day;
        cout << remain <<"lol\n";
    
    cout << "How much money has Dee got? " << money_mom << "\n";
    cout << "Dee can do this for " << day <<" days." <<"\n";
    cout << "Then he still has " << remain << " Baht." <<"\n";

    return 0; 
    }