//
//  RoundingNumbers.h
//  Fucntions and an Introduction to Recursion
//
//  Created by Amanpreeet Sandhu on 2025-10-24.
//
// An application of function floor is rounding a value to the nearest integer. The statement
// y = floor(x +0.5);
// rounds the number x to the nearest integer and assigns the result to y. Write a program that reads several numbers and uses the preceding statement to round each of these numbers to the nearest integer. For each number processed , print both the original number and the rounded number

#include <iostream>

using namespace std;

class RoundingNumbers{
public:
    
    int floorfun(double x){
        int y = floor(x+0.5);
        cout << y << endl;
        return y;
    }
    
private:
    
};


