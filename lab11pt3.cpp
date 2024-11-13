/*
CSCI 1010 Section 001
Lab 11 Pt 3
Caesar cypher program
Alex Perry
October 30th, 2024
*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string text;
    int shift;
    string result = "";

    cout << "Enter a plaintext message: ";
    getline(cin, text);
    cout << "Enter shift value: ";
    cin >> shift;

    for (int i = 0; i < text.length(); i++) 
    {
        char c = text[i];
        if (isupper(c)) 
        {
            result += 'A' + (c - 'A' + shift) % 26;
        }
        else if (islower(c)) 
        {
            result += 'a' + (c - 'a' + shift) % 26;
        }
        else 
        {
            result += c;
        }
    }

    cout << "Encoded message: " << result << endl;

    return 0;
}
