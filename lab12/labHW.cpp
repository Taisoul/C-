#include <iostream>
using namespace std;

int main() {
    int room[15],HW[15],test[15],mid[15],final[15],sum_score[15],i,j;
    string name[15],lname[15],grade[15]; 
   for(i = 1;i <= 2;i++){
       room[i] = 0;
       HW[i] = 0;
       test[i] = 0;
       mid[i] = 0;
       final[i] = 0;
       sum_score[i] = 0;
       cout <<"Enter your name : ";
       cin >> name[i];
       cout <<"Enter your Lastname : ";
       cin >> lname[i];
       cout << "Name = " << name[i] << " " << lname[i] << "\n";

       do
       {
           cout << "Enter Score room : ";
           cin >> room[i];
       } while (room[i] < 0 || room[i] > 5);
           sum_score[i] += room[i];

         do
       {
           cout << "Enter Score HW : ";
           cin >> HW[i];
       } while (HW[i] < 0 || HW[i] > 15);
           sum_score[i] += HW[i];
        
         do
       {
           cout << "Enter Score test : ";
           cin >> test[i];
       } while (test[i] < 0 || test[i] > 10);
           sum_score[i] += test[i];
        
         do
       {
           cout << "Enter Score mid : ";
           cin >> mid[i];
       } while (mid[i] < 0 || mid[i] > 30);
           sum_score[i] += mid[i];


         do
       {
           cout << "Enter Score final : ";
           cin >> final[i];
       } while (final[i] < 0 || final[i] > 30);
           sum_score[i] += final[i];
            

       if(sum_score[i] >= 80){
           grade[i] = "A";
       }else if(sum_score[i] >= 70){
           grade[i] = "B";
       }else if(sum_score[i] >= 60){
           grade[i] = "C";
       }else if(sum_score[i] >= 50){
           grade[i] = "D";
       }else{
           grade[i] = "F";
       }

        // cout << "Name = " << name[i] << " " << lname[i] << "||";
        // cout << "Score_room = " << room[i] << "||";
        // cout << "Score_HW = " << HW[i] << "||";
        // cout << "Score_test = " << test[i] << "||";
        // cout << "Score_mid = " << mid[i] << "||";
        // cout << "Score_final = " << final[i] << "||";
        // cout << "Score_sum = " << sum_score[i] << "||";
        // cout << "Grade = " << grade[i] << "||\n";
        cout << "=========================================================================================================================\n\n\n";
    
   }

    cout << "Name \t\t Room \t HW \t test \t mid \t final \t sum \t grade \n";
   for (j = 1; j < i; j++)
   {
       cout << name[j] << " " << lname[j] << "\t\t"  << room[j] << "\t"  << HW[j] << "\t"  << test[j] << "\t"  << mid[j] << "\t"  << final[j] << "\t"  << sum_score[j] << "\t"  << grade[j] << "\t"  << "\n";
   }
   
   
}
