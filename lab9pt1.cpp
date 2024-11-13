/*
CSCI 1010 Section 001
Lab 9 Pt 1
Finding fibonaci numbers (f(0)-f(20))
Alex Perry
October 16th, 2024
*/

#include<iostream>

using namespace std ;

int main()
{
    int f1 = 1, f2 = 1, sum, i, num = 2 ;
    cout << "f(0): 1" << endl ;
    cout << "f(1): 1" << endl ;

    for(i = 0; i <= 18; i++)
    {
       sum = f1 + f2 ;
       f1 = f2 ;
       f2 = sum ;
       cout << "f(" << num << "): " << sum << endl ; 
       num++ ;
    }
}