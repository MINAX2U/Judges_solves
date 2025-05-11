#include <iostream>
#include <cmath>
using namespace std;

int days_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int year){
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int days(int year, int month, int day){
    for (int i = 0; i < month - 1; i++)
        day += days_month[i];
    if (month > 2 && leap(year))
        day++;
    return day + 365 * (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
}

int main(){
    int y1, m1, d1, y2, m2, d2;
    while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
        cout << abs(days(y1, m1, d1) - days(y2, m2, d2)) << endl;
    }
    return 0;
}
