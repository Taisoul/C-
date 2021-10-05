#include <iostream>
using namespace std;
int main() {
    int interest = 0;
    int month = 0;
    int rate = 0;
    int i = 0;
    double dept = 0;
    double sumrate = 0;
    double outcome = 0;
    cout << "interest : ";
    cin >> interest;
    cout << "month : ";
    cin >> month;
    cout << "rate : ";
    cin >> rate;

    dept = interest;
	sumrate = 0;
	outcome = 0;

    for (i = 0; i < month; i++)
    {
        dept += sumrate;
        sumrate = (dept * rate) / 100;
        outcome += sumrate ;
        cout << " dept. = " << dept << "," "in. =  "<< sumrate << ","  "outcome =  "<< interest + outcome<<"\n";
    }

    cout << "All of interest = "<<outcome;
    

    

}
