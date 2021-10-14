#include <iostream>
using namespace std;
void menu();
void ScoreSTD();
string Calgrade(int sum_score);

int main(){
    menu();
}
void menu(){
    int sum_score,chk;
    cout << "0 = exit || 1 = CalGrade || 2 = Enter Score Student\n";
    cout << "Enter choice : ";
    cin >> chk;
    if(chk == 0){
    }else if(chk == 1){
        cout << "Enter Score : ";
        cin >> sum_score;
        cout << "Grade is " << Calgrade(sum_score) << "\n";
        menu();
    }else if(chk == 2){
       ScoreSTD();
        menu();
    }

}

string Calgrade(int sum_score){
    string grade;
    
    if(sum_score >= 80){
           grade = "A";
       }else if(sum_score >= 70){
           grade = "B";
       }else if(sum_score >= 60){
           grade = "C";
       }else if(sum_score >= 50){
           grade = "D";
       }else{
           grade = "F";
       }
       
        return grade;
}

void ScoreSTD(){
    int numstd;
    cout << "Enter Number of Student :";
    cin >> numstd;
    int room[numstd],HW[numstd],test[numstd],mid[numstd],final[numstd],sum_score[numstd],i,j;
    string name[numstd],lname[numstd],grade[numstd]; 
   for(i = 0;i < numstd;i++){
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
            

         grade[i] = Calgrade(sum_score[i]);
       
        cout << "=======================================================================================\n\n\n";
    
   }

    cout << "Name \t\t Room \t HW \t test \t mid \t final \t sum \t grade \n";
   for (j = 0; j < numstd; j++)
   {
       cout << name[j] << " " << lname[j] << "\t\t"  << room[j] << "\t"  << HW[j] << "\t"  << test[j] << "\t"  << mid[j] << "\t"  << final[j] << "\t"  << sum_score[j] << "\t"  << grade[j] << "\t"  << "\n";
   }
}
