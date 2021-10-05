#include <iostream>
using namespace std;
int main() {
    int score = 0;

    string grade = "";

    for(int i = 1;i<=3;i++){
    int score_p = 0;
    int score_m = 0;
    int score_f = 0;
    string text_p = "";
    string text_m = "";
    string text_f = "";
    cout << "\n--------------------------------------------------------------\n";
    cout << "Student : " << i <<"\n";
    cout << "Enter the Project score : ";
    cin >> score_p;
    if(score_p <0 || score_p > 20){
        text_p =  "Project Score Error!!";
        score_p = 0;
    }
    cout << "Enter the Midterm score : ";
    cin >> score_m;
    if(score_m <0 || score_m > 30){
        text_m =  "Midterm Score Error!!";
        score_m = 0;
    }
    cout << "Enter the Final score : ";
    cin >> score_f;
    if(score_f <0 || score_f > 50){
        text_f =  "Final Score Error!!";
        score_f = 0;
    }

    score = score_p+score_m+score_f;

    if(score >= 80){
        grade = "A";
    }else if(score >= 70){
        grade = "B";
    }else if(score >= 60){
        grade = "C";
    }else if(score >= 50){
        grade = "D";
    }else{
        grade = "F";
    }
    if(text_p != ""){
    cout << text_p <<"\n";
    }
    if(text_m != ""){
    cout << text_m <<"\n";
    }
    if(text_f != ""){
    cout << text_f <<"\n";
    }
    if(text_p != "" || text_m != "" || text_f != ""){
    cout << "Your score is " << "0" <<"\n";
    cout << "Your grade is " << "" <<"\n";
    cout << "--------------------------------------------------------------\n";
    }else{
    cout << "Your score is " << score <<"\n";
    cout << "Your grade is " << grade <<"\n";
    cout << "--------------------------------------------------------------\n";
    }
    }
    }