/*
CSCI 1010 Section 001
Lab 9 Pt 4
Calculating e^x 
Alex Perry
October 16th, 2024
*/

#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    double e = 1 ;
    double x = 0 ;
    int fac = 0 ;

    cout << "Enter x: " ;
    cin >> x ;

    for (int i = 1; i <= 10; i++) 
    {
        fac = 1;
        for (int j = 1; j <= i; j++) 
        {
            fac *= j ;
        }
        e += pow(x, i) / fac ;
    }

    cout << "e^" << x << " = " << e << endl ;
}

