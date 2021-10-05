#include <iostream>
using namespace std;
int main() {
    int age = 0;
    int college = 0;
    int subject = 0; 
    bool interview = false; int time = 0;

    cout << "What college? 1 = KKU, 2 = CU, 3 = other: ";
    cin >> college;
    cout << "What subject? 1 = Math, 2 = Physics, 3 = other: ";
    cin >> subject; cout << "How old is the applicant? ";
    cin >> age;
    if((age>25 && subject==1) && (college==3 || college==1)) {
    interview = true; time = 1; } 
    if(college==2 &&subject ==1) {
    interview = true; time = 2; } 
    if(college==1 && subject==2 && !(age>28)) {
    interview = true; time = 3; }
    if(college==2 && (subject==2 || subject==3) && age>25) {
    interview = true; time = 4; } 
    if(interview) cout << "Give 'em an interview "<< time << " times." << endl;
    else cout << "Reject 'em" << endl;
    return 0; }