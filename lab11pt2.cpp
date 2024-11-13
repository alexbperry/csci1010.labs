/*
CSCI 1010 Section 001
Lab 11 Pt 2
outputs length of string and number of capital numbers
Alex Perry
October 30th, 2024
*/
#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string Input;
    int uppercaseCount = 0;

    cout << "Enter a string: ";
    getline(cin, Input);

    int stringLength = Input.length();

    for (int i = 0; i < stringLength; ++i) 
    {
        if (Input[i] >= 'A' && Input[i] <= 'Z') 
        {  
            uppercaseCount++;
        }
    }

    cout << "Length of the string: " << stringLength << endl;
    cout << "Number of uppercase letters: " << uppercaseCount << endl;

    return 0;
}
