#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int yr, month, day, y, x, m, dow ;

    cout << "Enter year: " ;
    cin >> yr ;
    cout << "enter month: " ;
    cin >> month ;
    cout << "Enter day: " ;
    cin >> day ;

    y = yr - (14 - m) / 12 ;
    x = y + y/4 -y / 100 + y / 400 ;
    m = month + 12 * ((14 - month) / 12) - 2 ;
    dow = (day + x + (31 * m) / 12) % 7 ;

    cout << "The day of the week is: " << dow ;
}