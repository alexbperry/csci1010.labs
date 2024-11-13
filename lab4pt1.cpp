/*
Step 1: identify variables
step 2: Recieve input
step 3: calculations for remainders
step 4: write output 

Mod written out: 
    change = change - (quarter * 25) ; 
    change = change - (dime * 10) ;
    change = change - (nickel * 5) ;
    change = change - (penny * 1) ;

    Binary = 1011 % 10
    
    101 % 10
*/
#include<iostream>

using namespace std ;

int main()
{
    int penny, nickel, dime, quarter, change ;

    cout << "how much money in change do you have: " ;
    cin >> change ;

    //quarters
    quarter = change / 25 ;
    change = change % 25 ;
    cout << "Quarters: " << quarter << endl ;
    
    //dimes
    dime = change / 10 ;
    change = change % 10 ;
    cout << "Dimes: " << dime << endl ;

    //nickels
    nickel = change / 5 ;
    change = change % 5 ;
    cout << "Nickel: " << nickel << endl ;

    //pennies
    penny = change / 1 ;
    change = change % 1 ;
    cout << "Pennies: " << penny << endl ;

}