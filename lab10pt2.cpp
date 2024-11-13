/*
CSCI 1010 Section 001
Lab 10 Pt 2
Binary to decimal 
Alex Perry
October 23rd, 2024
*/
#include <iostream>

using namespace std;

int main() 
{
    int binary, decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    int temp = binary;

    do 
    {
        remainder = temp % 10;
        decimal += remainder * base;
        base *= 2;
        temp /= 10;
    } 
    while (temp > 0);

    cout << "The decimal equivalent of binary " << binary << " is " << decimal << endl;

    return 0;
}
