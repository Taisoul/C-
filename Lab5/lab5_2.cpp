#include<iostream>
using namespace std;

int main(){
    int score;
    string ans;
    cout << "Enter num\n";
    cin >> score;
    cout << "Num : "<< score <<"\n";
if(score >= 0 && score <= 100){
    if(score >= 80) {
        ans = "A";
    }else if(score >= 70){
        ans = "B";
    }else if(score >= 60){
        ans = "C";
    }else if(score >= 50){
        ans = "D";
    }else{
        ans = "F";  
    }
    cout << "Your grade : " << ans;
}else{
    cout << "Error!!";
}
    return(0);
}