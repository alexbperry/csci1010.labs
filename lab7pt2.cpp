/*
CSCI 1010 Section 001
Lab 7 Pt 1
Ask user to enter a 4-digit number, 
will tell you if year is a leap year or not
Alex Perry
October 2nd, 2024
*/
#include<iostream>

using namespace std;

int main()
{
    // define variables
    int year, century, leap;

    // user input
    cout << "Please enter a 4-digit number for your year: " ;
    cin >> year ;

    //finding if century year
    if ((year % 100) == 0)
    {
       century = year % 100 ;
       leap = century % 4 ;
       cout << "Your year " << year << ", is a leap year!" ;
    }
    else
    {
        //not century, 
        if ((year % 4) == 0)
        {
            cout << "Your year " << year << ", is a leap year!" ;
        }
        else 
        {
            cout << "Your year " << year << ", is not a leap year!" ;
        }
    }

}