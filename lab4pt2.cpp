/*
Write a program to let the user enter a two-digit number, and
then swap the digits to make a new two-digit number

step 1: separate digits
step 2: swap digits
*/

#include<iostream>

using namespace std ;

int main()
{
    //input
    int numb, ones , tens ;
    cout << "Pick a two digit number: " ;
    cin >> numb ;

    //making switching tens place and ones place switch
    ones = numb % 10 ;
    tens = numb / 10 ;
    ones = ones * 10 ;

    //output 
    cout << tens + ones ;
}