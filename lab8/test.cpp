#include <iostream>
using namespace std;
int main() {
    
    int all_member = 437;
    int member = 0;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int sum_score = 0;
    string premier_name1 = "";
    string premier_name2 = "";

    cout << "member : ";
    cin >> member;
    if(member <= (all_member/2) ){
        cout <<"end";
    }else{
          do
          {
              cout << "Premier Name1 : ";
              cin >> premier_name1;
              cout << "Premier Name2 : ";
              cin >> premier_name2;
              do
              {
              cout << "Score1 : ";
              cin >> score1;
              cout << "Score2 : ";
              cin >> score2;
              cout << "Score3 : ";
              cin >> score3;
              sum_score = score1+score2+score3;
              if(sum_score != member){
                  cout << "sum_score != member\n";
              }
              } while (sum_score != member);
          } while ( score1 < (sum_score / 2) && score2 < (sum_score / 2) || score1 == score2);
          if(score1 > score2){
              cout << premier_name1;
          }else if(score2 >score1){
              cout << premier_name2;
          }
    }

    

}
