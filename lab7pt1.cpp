/*
CSCI 1010 Section 001
Lab 7 Pt 1
Calculating cost of long distance call
Alex Perry
October 2nd, 2024
*/
#include<iostream>

using namespace std ;

int main()
{
    //define variables
    int start_hr, end_hr, start_min, end_min, hr_tot, min_tot ;
    double duration, end_fee ;

    //user input 
    cout << "enter starting hour and minute (in 24HR format): " ; 
    cin >> start_hr >> start_min ;
    cout << "enter ending hour and minute (in 24HR format): " ;
    cin >> end_hr >> end_min ;

    //total time
    hr_tot = end_hr - start_hr ;
    min_tot = end_min - start_min ;

    //duration
    duration = (hr_tot) * 60 + (min_tot) ;

    //calculating starting rate
    if ( start_hr < 8 || end_hr > 18)
    {
        end_fee = (duration * .25) ;
        cout << "The cost is " << end_fee << endl ;
    }
    else
    { 
        end_fee = (duration * .4) ;
        cout << "The cost is " << end_fee << endl ;
    }
    

}