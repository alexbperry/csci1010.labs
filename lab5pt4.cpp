#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    char gender ;
    double age, height, weight, bmi, bars ; 

    cout << "What is your height (inches) ? " ;
    cin >> height ;
    cout << "What is your weight (pounds)? " ;
    cin >> weight ;
    cout << "What is your age (years)? " ;
    cin >> age ;
    cout << "What is your gender (M/F)? " ;
    cin >> gender ;

    if ( gender == 'm' || gender == 'M') 
    {
        bmi = 66 + ( 6.3 * weight ) + ( 12.9 * height ) - ( 6.8 * age ) ;
    }
    else if (gender == 'f' || gender == 'F') 
    {
        bmi = 655 + ( 4.3 * weight ) + ( 4.7 * height ) - ( 4.7 * age) ;
    }

    bars = bmi/230 ;
    cout << "You can eat " << bars << " chocolate bars" << endl ; 
}