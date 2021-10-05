#include<iostream>
using namespace std;
int main(){
    int area,area_cal,all,sum;
    int chart_1 = 200000;
    int chart_2 = 150000;
    char mat,size;
    string text = "";
    cout << "Enter the area : ";
    cin >> area;
    cout << "Enter type of the material : ";
    cin >> mat;
    if(area >= 20 && area <= 40){
            size = 'S';
            all = 200000;
    }else if(area >= 41 && area <= 100){
            size = 'M';
            area_cal = area - 40;
            all = chart_1+area_cal * 3000;
    }else if(area > 100){
            size = 'L';
            area_cal = area - 40;
            area_cal = area_cal - 20;
            all = chart_1+chart_2+(area_cal * 2000);
    }else{
            text = "Area less than 20";
    }
    
    switch (mat)
    {
    case 'B':
    case 'b':
        if(size == 'S'){
            area = area * 5000;
            sum = all + area;
        }else if(size == 'M'){
            area = area * 7500;
            sum = all + area;
        }else if(size == 'L'){
            area = area * 15000;
            sum = all + area;
        }
        break;
    case 'G':
    case 'g':
        if(size == 'M'){
            area = area * 10000;
            sum = all + area;
        }else if(size == 'L'){
            area = area * 20000;
            sum = all + area;
        }else{
            text = "Error";
        }
        break;
    case 'P':
    case 'p':
        if(size == 'M'){
            area = area * 15000;
            sum = all + area;
        }else if(size == 'L'){
            area = area * 30000;
            sum = all + area;
        }else{
            text = "Error!";
        }
        break;
    default:
            text = "Error!";
        break;
    }
    if(text == ""){
    cout << "The house will cost " << sum << " bath to build";
    }else{
        cout << text;
    }

    
    return(0);
        }