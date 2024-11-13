/*
An approximate value of pi can be calculated using the series given below:
Write a C++ program to calculate the approximate value of pi using this series.
The program takes an input n that determines the number of terms in the
approximation of the value of pi and outputs the approximation. Include a loop
that allows the user to repeat this calculation for new values n until the user says
she or he wants to end the program
*//*
CSCI 1010 Section 001
Lab 9 Pt 2
Calculating approximate value of pi
Alex Perry
October 16th, 2024
*/

// pi = 4 (1 - 1/3 + 1/5 - 1/7 + 1/9 ... + ((-1)^n) / (2n + 2))
#include<iostream>

using namespace std ;

int main() 
{
    char choice;
    
    do 
    {
        int n;
        double pi = 0.0;

        cout << "Enter the number of terms (n): ";
        cin >> n;

        for (int i = 0; i < n; i++) 
        {
            double term = pow(-1, i) / (2 * i + 1);
            pi += term;
        }

        pi *= 4;

        cout << "Approximate value of pi using " << n << " terms: " << pi << endl;

        cout << "Would you like to calculate again? (y/n): ";
        cin >> choice;

    } 
    while (choice == 'y' || choice == 'Y');

}