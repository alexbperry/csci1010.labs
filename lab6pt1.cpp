/*
CSCI 1010 Section 001
Lab 6 Pt 1
Functional Calculator
Alex Perry
September 25, 2024
*/

#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    char operation ;
    double num1, num2, total ; 

    //adding menu for user
    cout << "Please select from the menu \n" ;
    cout << "A. Addition \n" ;
    cout << "S. Subtraction \n" ;
    cout << "M. Multiplication \n" ;
    cout << "D. Division \n" ; 
    cin >> operation ;

    cout << "Enter two numbers: " ;
    cin >> num1 >> num2 ;

    //calculator operations
    if ( operation == 'A' || operation == 'a') 
    {
        total = num1 + num2 ;
        cout << num1 << " + " << num2 << " = " << total << endl ;
    }
    else if ( operation == 'S' || operation == 's' )
    {
        total = num1 - num2 ;
        cout << num1 << " - " << num2 << " = " << total << endl ;
    }
    else if ( operation == 'm' || operation == 'M' )
    {
        total = num1 * num2 ;
        cout << num1 << " * " << num2 << " = " << total << endl ;
    }
    else if ( operation == 'd' || operation == 'D' )
    {
        total = num1 / num2 ;
        cout << num1 << " / " << num2 << " = " << total << endl ;
    }
}
