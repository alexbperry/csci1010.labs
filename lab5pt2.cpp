#include<iostream>

using namespace std ;

int main()
{
    double temp, windS, windC ;
    cout << "enter temp: " ;
    cin >> temp ;
    cout << "enter wind speed: " ;
    cin >> windS ;

    windC = 35.74 + (0.6215 * temp) + (((0.4275 * temp) - 35.75) * pow(windS, 0.16)) ;

    cout << "The wind chill is: " << windC ;

}