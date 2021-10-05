#include <iostream>
#include<cmath>
using namespace std;
int main() {
    double num_r = 0;
    int choice = 0;
    float pi = 3.14;
    string text="";
    cout << "Enter the number of radious : ";
    cin >> num_r;

    cout << "1. Calculate the circumference of circle \n";
    cout << "2. Calculate the area of circle \n";
    cout << "3. Calculate the volume of phere \n";
    cout << "Enter the choice : ";
    cin >> choice;


    switch (choice)
    {
    case 1:
        num_r = 2.0 * pi * num_r;
        text = "circumference of circle :";
        break;
    case 2:
        // num_r = 3.14 * (num_r*num_r);
        num_r = pi*pow(num_r,2);
        text = "area of circle :";
        break;
    case 3:
        // num_r = (4.0/3.0) * 3.14 * (num_r*num_r*num_r);
        num_r = (4.0/3.0) * pi *pow(num_r,3);
        text = "volume of phere :";
        break;
    default:
        text = "What your number of choice";
        num_r = 0;
        break;
    }
    cout << text <<num_r;
    }