//
//  MathLibraryFunctions.h
//  Fucntions and an Introduction to Recursion
//
//  Created by Amanpreeet Sandhu on 2025-10-17.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class MathLibraryFunctions{
public:

    void printOutputOfMathFunctions(){
        cout << fixed << setprecision(1);
        //sqrt
        cout << "sqrt(" << 9.0 << ") = " << sqrt(9.0);
        //exp
        cout << "\nexp(" << 1.0 << ") = " << setprecision(6) << exp(1.0)
            << "\nexp(" << setprecision(1) << 2.0 << ") = " << setprecision(6) << exp(2.0);
        //log()
        cout << "\nlog(" << 2.718282 << ") =" << setprecision(1) << log(2.71828)
            << "\nlog(" << 7.389056 << ") = " << setprecision(1) << log(7.389056);
        //log10
        cout <<"\nlog10(" << 10.0 << ") = " << log10(10.0)
            <<"\nlog10(" << 100.0 << ") = "  << log10(100.0);
        //fabs
        cout <<"\nfabs(" << 5.1 << ") = " << fabs(5.1)
            <<"\nfabs(" << 0.0 << ") = " << fabs(0.0)
            <<"\nfabs(" << -8.76 << ") = " << fabs(-8.76);
        //ceil
        cout <<"\nceil(" << 9.2 << ") = " << ceil(9.2)
            <<"\nceil(" << -9.8 << ") = " << ceil(-9.8);
        //floor
        cout <<"\nfloor(" << 9.2 << ") = " << floor(9.2)
            <<"\nfloor(" << -9.8 << ") = " << floor(-9.8);
        //pow
        cout <<"\npow(" << 2.0 << ", " << 7.0 << ") = " << pow(2.0, 7.0)
            <<"\npow(" << 9.0 << ", " << 0.5 << ") = " << pow(9.0, 0.5);
        //fmod
        cout << setprecision(3)
        << "\nfmod returns the remainder value after dividing the two values in ()"
        << "\nfmod(" << 2.6 << ", " << 1.2 << ") = " << fmod(2.6, 1.2)
        << setprecision(1);
        // sin, cos and tan
        cout <<"\nsin(" << 0.0 << ") = " << sin(0.0);
        cout <<"\ncos(" << 0.0 << ") = " << cos(0.0);
        cout <<"\ntan(" << 0.0 << ") = " << tan(0.0);
        cout << endl << endl;
        
    }
    
    void printValueOfX(){
        cout <<"x = "<< fabs(7.5)
        << "\nx = " << floor(7.5)
        << "\nx = " << fabs(0.5)
        << "\nx = " << ceil(0.0)
        << "\nx = " << fabs(-6.4)
        << "\nx = " << ceil(-6.4)
        << "\nx = " << ceil(-fabs(-8 + floor(-5.5))) << endl;
        
    }

private:
};
