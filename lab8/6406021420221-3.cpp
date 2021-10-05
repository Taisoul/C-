#include <iostream>
using namespace std;
int main() {
        int day = 0,month = 0,year = 0;
        int sumday = 0,sumday_base = 0;
        int base_day = 1;
        int base_month = 1;
        int base_year = 2513;
        do
        {
        cout << "Please enter day month and year : ";
        cin >> day;
        if(day > 30 || day < 1){
        cout << "day more than 30 or less than 1, Please try again!!\n";
        }
        } while (day > 30 || day < 1);

        do
        {
        cin >> month;
        if(month > 12 || month < 1){
        cout << "month more than 12 or less than 1, Please try again!!\n";
        }
        } while (month > 12 || month < 1);

        do
        {
        cin >> year;
        if( year > 2599 || year < 2513){
        cout << "year more than 2599 or less than 2513, Please try again!!\n";
        }
        } while (year > 2599 || year < 2513);

        sumday += day+(month*30)+(year*360);
        sumday_base += base_day+(base_month*30)+(base_year*360);
        int diffday = 0;
        diffday = sumday-sumday_base;
        cout << "The difference is about " << diffday << " days.";
}
