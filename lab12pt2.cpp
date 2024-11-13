/*
CSCI 1010 Section 001
Lab 12 Pt 1
Enter 2 strings, tell if second string is a substring of first
Alex Perry
Novemeber 6th, 2024
*/

#include <iostream>
#include <string> 

using namespace std;

// Solution 1: Using std::string library function (find)
bool Find(const string& str1, const string& str2) 
{
    return str1.find(str2) != string::npos;
}

// Solution 2: Without using std::string library functions
bool Manual(const string& str1, const string& str2) 
{
    int len1 = str1.length();
    int len2 = str2.length();

    if (len2 > len1) return false;

    for (int i = 0; i <= len1 - len2; i++) 
    {
        bool match = true;
        for (int j = 0; j < len2; j++) 
        {
            if (str1[i + j] != str2[j]) 
            {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() 
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    // Solution 1
    if (Find(str1, str2)) 
    {
        cout << "Using find: \"" << str2 << "\" is a substring of \"" << str1 << "\"." << endl;
    } 
    else 
    {
        cout << "Using find: \"" << str2 << "\" is NOT a substring of \"" << str1 << "\"." << endl;
    }

    // Solution 2
    if (Manual(str1, str2)) 
    {
        cout << "Without using string functions: \"" << str2 << "\" is a substring of \"" << str1 << "\"." << endl;
    } 
    else 
    {
        cout << "Without using string functions: \"" << str2 << "\" is NOT a substring of \"" << str1 << "\"." << endl;
    }

    return 0;
}
