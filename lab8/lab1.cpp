#include <iostream>
using namespace std;
int main() {
    int score = 0;
    string grade = "";
    cout << "Enter the number of your score : ";
    cin >> score;
    if(score >= 80 && score <= 100){
        grade = "A";
    }else if(score >= 70 && score <= 79){
        grade = "B";
    }else if(score >= 60 && score <= 69){
        grade = "C";
    }else if(score >= 50 && score <= 59){
        grade = "D";
    }else if(score < 50 && score >= 0){
        grade = "F";
    }else{
        grade = "Wrong score";
    }
    cout << "Your grade is " << grade;
    }