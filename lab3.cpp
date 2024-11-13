#include<iostream>

using namespace std;

int main()
{
    int RectL, RectW, radius, TriL, TriW ;
    double pi ;

    RectL = 100 ;
    RectW = 50 ;
    pi = 3.14 ;
    radius = 30 ;
    TriL = 73 ;
    TriW = 51 ;

    cout << "The area of the rectangle is: " << RectL * RectW << " cm^2" << "\n" ;
    cout << "The area of the circle is: " << pi * (radius * radius) << " cm^2" << "\n" ;
    cout << "The area of the Triangle is: " << .5 * (TriL * TriW) << " cm^2" << "\n" ;

}