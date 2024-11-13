/*
CSCI 1010 Section 001
Lab 11 Pt 1
        Write a program to create an int array of size 100. Initialize the first 50 elements of
    the array with some random numbers between [100,200]. Then,
    a. Display the array
    b. Insert 50 as the new second element of the array
    c. Display the array to test if the new element inserted successfully
    d. Count how many of them are even numbers
    e. Calculate the average.
Alex Perry
October 30th, 2024
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
    const int SIZE = 100;
    int arr[SIZE] = {0};
    int sum = 0, evenCount = 0;
    double average;

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 50; ++i) 
    {
        arr[i] = 100 + rand() % 101; 
    }

    cout << "Array (Initial 50 elements): ";
    for (int i = 0; i < 50; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 49; i > 0; --i) 
    {
        arr[i + 1] = arr[i];
    }
    arr[1] = 50;

    cout << "Array after insertion: ";
    for (int i = 0; i < 51; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 51; ++i) 
    {
        if (arr[i] % 2 == 0) 
        {
            evenCount++;
        }
        sum += arr[i];
    }

    average = static_cast<double>(sum) / 51;

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Average of the first 51 elements: " << average << endl;

    return 0;
}
