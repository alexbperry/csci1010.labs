#include<iostream>

using namespace std;

int main()
{
    char deg ;
    int temp ;
    cout << "Do you have celcius or fahrenheit (c/f): " ;
    cin >> deg ;
    cout << "Enter temperature: " ;
    cin >> temp ;

    if (deg == 'c' || deg ==  'C' )
    {
        temp = (9 * temp) / 5 + 32 ;
    }
    else if (deg == 'f' || deg == 'F' )
    {
        temp = (5 * temp) / 9 ;
    }
    else
    {
        cout << "invalid entry!" ;
    }

    cout << "New temp: " << temp ;
    
}