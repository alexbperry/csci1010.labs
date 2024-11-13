/*
CSCI 1010 Section 001
Lab 7 Pt 1
Rock-paper-scissors game
Alex Perry
October 2nd, 2024
*/
#include<iostream>

using namespace std ;

int main()
{
    char p1, p2 ;
    
    cout << "Rock, paper scissors!" << endl << "P1 choose (R, P, S): " << endl ;
    cin >> p1 ;
    cout << "P2 choose (R, P, S): " << endl ;
    cin >> p2 ; 

    // determining winner
    // player 1 winning scenarios
    if ((p1 == 'R' || p1 == 'r' ) && (p2 == 's' || p2 == 'S'))
    {
        cout << "Player 1 wins! " ;
    }
    else if ((p1 == 's' || p1 == 'S' ) && (p2 == 'P' || p2 == 'p'))
    {
        cout << "Player 1 wins! " ;
    }
    else if ((p1 == 'p' || p1 == 'P' ) && (p2 == 'r' || p2 == 'R'))
    {
        cout << "Player 1 wins! " ;
    }

    //player 2 winning scenarios 
    if ((p2 == 'R' || p2 == 'r' ) && (p1 == 's' || p1 == 'S'))
    {
        cout << "Player 2 wins! " ;
    }
    else if ((p2 == 's' || p2 == 'S' ) && (p1 == 'P' || p1 == 'p'))
    {
        cout << "Player 2 wins! " ;
    }
    else if ((p2 == 'p' || p2 == 'P' ) && (p1 == 'r' || p1 == 'R'))
    {
        cout << "Player 2 wins! " ;
    }

    //tie
    if ((p2 == 'R' || p2 == 'r' ) && (p1 == 'R' || p1 == 'r'))
    {
        cout << "It is a tie! try again! " ;
    }
    else if ((p2 == 's' || p2 == 'S' ) && (p1 == 's' || p1 == 'S'))
    {
        cout << "It is a tie! try again! " ;
    }
    if ((p2 == 'P' || p2 == 'p' ) && (p1 == 'P' || p1 == 'p'))
    {
        cout << "It is a tie! try again! " ;
    }
}