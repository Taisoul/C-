#include<iostream>
using namespace std;
int main(){
    int min,max,count = 0, sum = 0;
    char op;
    cout << "Enter Min : ";
    cin >> min;
    cout << "Enter Max : ";
    cin >> max;
    cout << "Enter Operator : ";
    cin >> op;
    cout << "Enter Count : ";
    cin >> count;
        while(min <= max){
            
            switch (op)
            {
            case '+':
                min+=count;
                sum += min;
                break;
            case '-':
                min-=count;
                sum -= min;
                break;
            default:
                break;
            }
            // min+=count;
        }
        cout << "Sum = "<< sum << endl;
        return(0);
        }