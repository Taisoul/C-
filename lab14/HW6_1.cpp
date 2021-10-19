#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char isPalindrome(char chk[20],char name[20]);

int main(){
    char name[20],chk[20];
    bool test;
    cout << "Enter text : ";
    cin >> name;

    int j = strlen(name)-1;
    for(int i=0;i<strlen(name);i++)
{
    chk[i] = name[j];
    j--;
}
    test =  isPalindrome(chk,name);
   if(test == true){
        cout << "Your text is Palindrome.";
   }else{
        cout << "Your text is not Palindrome.";
   }
    return(0);
}

char isPalindrome(char chk[20],char name[20]){ //palindrome	พาลินโดรม, คำหรือวลีที่สามารถเขียนตัวอักษรเรียงย้อนกลับจากหลังไปหน้า หรือจากซ้ายไปขวา แล้วยังคงอ่านออกเสียงได้เหมือนเดิม
    bool test = false;
        for (int i = 0; i < strlen(name)/2; i++)// หาร 2 เพราะเอาผลลัพธ์ตามตัวอย่าง เพราะ for นี้มันเช็คทุกตัวอักษร
        {
        if(chk[i] != name[i]){
            cout <<  name[i] << " = " << chk[i] << "\n";
            test = false;
            break;
        }else{
            cout << name[i] << " = " << chk[i] << "\n";
            test = true;
        }
    }
    return test;
}
