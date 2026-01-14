//
//  ParkingCharges.h
//  Fucntions and an Introduction to Recursion
//
//  Created by Amanpreeet Sandhu on 2025-09-26.
//
#include <iostream>

using namespace std;

class ParkingCharges{
public:
    double calculateCharges(double hours){
        cout << fixed << setprecision(2);
        if(hours > 3.0){
            charges += 5 * (hours - 3);
        }
        if(charges > 50.0){
            charges = 50.0;
        }
        return charges;
        
    };
    void printResults(){
        cout << "First Customer Hours: ";
        cin >> h1 ;
        cout << endl << "Second Customer Hours: ";
        cin >> h2 ;
        cout << endl << "Third Customer Hours: ";
        cin >> h3 ;
        
        c1 = calculateCharges(h1);
        c2 = calculateCharges(h2);
        c3 = calculateCharges(h3);
        
        cout << endl << "Car" << setw(10) << "Hours" << setw(10) << "Charges" << endl;
        cout << setw(2) << 1 << setw(10) << h1 << setw(10) << c1 << endl;
        cout << setw(2) << 2 << setw(10) << h2 << setw(10) << c2 << endl;
        cout << setw(2) << 3 << setw(10) << h3 << setw(10) << c3 << endl;
        cout << "Total" << setw(8) << h1+h2+h3  << setw(10) << c1 +c2 + c3 << endl;
        
    }

private:
    double h1, h2, h3; // should not be more than 24 hours
    double c1, c2, c3; // minimum charge is $20, if hours get over 3 add $5 for each hour, charges should not go over $50
    double charges{20.00};
    
};


