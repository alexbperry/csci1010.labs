/*
CSCI 1010 Section 001
Lab 7 Pt 1
Use a switch statement to convert a letter grade entered by the user to display equivalent words
Alex Perry
October 2nd, 2024
*/
#include<iostream>

using namespace std;

int main()
{
    char grade ;

    cout << "Enter your letter grade: " ;
    cin >> grade ;

    switch(grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent!" ;
            break ;
        case 'B':
        case 'b':
            cout << "Good" ;
            break ;
        case 'C' :
        case 'c' :
            cout << "Average" ;
            break ;
        case 'D' :
        case 'd' : 
            cout << "Poor" ;
            break ;
        case 'F' :
        case 'f' :
            cout << "Failing" ;
            break ;
        default :
            cout << "Invalid" ;

    }
}