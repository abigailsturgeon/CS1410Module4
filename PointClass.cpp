// File: PointClass
// Created by Abigail Sturgeon on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants, Structure, Classes
class Point
{
// Data members
private:
    float x;
    float y;
public:
    // Constructor
    Point(): x(0.0), y(0.0) {}

    // Methods
    void showPoint()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};

// Main Program Program

int main()
{
    Point p1;
    p1.showPoint();     // Display values
    p1.updatePoint(2.5, 3.9);       // Update values
    p1.showPoint();     // Display values

    return 0;

}

// Function Definitions