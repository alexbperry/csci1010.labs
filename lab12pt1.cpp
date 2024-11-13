/*
CSCI 1010 Section 001
Lab 12 Pt 1
10 random numbers displayed, then the 10 numbers reversed displayed
Alex Perry
Novemeber 6th, 2024
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std ;

//function for reversing the numbers
void reverseArray(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    const int size = 10 ;
    int arr[size] ;

    srand(static_cast<unsigned>(time(0))) ;

    cout << "Original array: " << endl ;
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1 ;
        cout << arr[i] << " " ;
    }
    cout << endl ;

    //callback from reverse function 
    reverseArray(arr, size) ;

    //displaying reversed
    cout << "Reversed: " << endl ;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}