#include<iostream>
using namespace std;
int main(){
    int gal,mile;
    cout << "Input petroleum used : ";
    cin >> gal;
    cout << "Input mileage : ";
    cin >> mile;
    // cout << "Input petroleum used : " << gal << "\n";
    // cout << "Input mileage : " << mile << "\n";
    float sum_gal,sum_mile;
    sum_gal = gal * 4.5461;
    sum_mile = mile * 1.6093;
    cout << "(1) Fuel economy = " << mile / gal << " Miles per gallon (MPG) " << "\n";
    cout << "(2) The car will use " << sum_gal / sum_mile << " Liter per killometer " << "\n";
    cout << "(3) Fuel economy = " << sum_mile / sum_gal <<" Killometer per liter (km/L)"<< "\n";

    return(0);
        }