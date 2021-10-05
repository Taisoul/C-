#include <iostream>
using namespace std;
int main() {
    int play1 = 0;
    float score1 = 0;
    int play2 = 0;
    float score2 = 0;
    float turn = 1;
    float score_win = 0;
    string text = "";
    cout << "turn : ";
    cin >> score_win ;
    float sum_score_win = (score_win * 70)/100;
    
    while(turn <= score_win){
    if(score1 != sum_score_win && score2 != sum_score_win){
    cout << "---------------------------------------------------------------" << "\n";
    cout << text;
    cout << "round : " << turn<<"\n";
    cout << "score1 : " << score1 << "\n";
    cout << "score2 : "<< score2 <<"\n";
    cout << "1 = hammer || 2 = scrissor || 3 = paper " <<"\n";
    cout << "player 1 : ";
    cin >> play1;
    if(play1 > 3){
        text = "***Player1 is problem. Please try again***\n";
        continue;
    }
    cout << "player 2 : ";
    cin >> play2;
    if(play2 > 3){
        text = "***Player2 is problem. Please try again***\n";
        continue;
    }
    if(play1 == 1 && play2 ==3 || play1 == 2 && play2 == 1 ||play1 == 3 && play2 == 1){
        score2++;
    }else if(play1 == 1 && play2 == 2 || play1 == 2 && play2 == 3|| play1 == 3 && play2 == 1){
        score1++;
    }
    }
    text = "";
    turn++;
    }
    cout << "---------------------------------------------------------------" << "\n";
    cout << "score of player1 : " << score1 << "\n";
    cout << "score of player2 : "<< score2 <<"\n";
    if(score1 > score2){
    cout << "player 1 is winner" << "\n";
    }else if(score2 > score1){
    cout << "player 2 is winner" << "\n";
    }else if(score1 == score2){
    cout << "Player1 draw Player2" << turn << "\n";
    }
    
    
    return 0; 
    }