/*
CSCI 1010 Section 001
Lab 6 Pt 2
Write a program that ask the user to enter the amount of taxable income, 
then displays the tax due 
Alex Perry
September 25, 2024
*/

#include<iostream>

using namespace std;

int main()
{
    double income ;

    cout << "What is your income: " ;
    cin >> income ;

    if (income <= 750)
    {
        income = income * 0.01 ;
    }
    else if (income <= 2250)
    {
        income = ((income - 750) * 0.02) + 7.5 ;
    }
    else if (income <= 3750)
    {
        income = ((income - 2250) * 0.03) + 37.5 ;
    }
    else if (income <= 5250)
    {
        income = ((income - 3750) * 0.04) + 82.5 ;
    }
    else if (income > 5250)
    {
        income = ((income - 5250) * 0.05) + 142.5 ;
    }

    cout << "your income tax is: " << income ;

    return 0 ;
}
