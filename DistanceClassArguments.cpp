// File: DistanceClassArguements
// Created by Abigail Sturgeon on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants, Structures, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0)  // Constructor with no arguments
    {}
    Distance(int ft, float in): feet(ft), inches(in)    // Constructor with two arguments
    {}
    void setDistance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDistance() // Get user input
    {
        cout << "\nEnter feet: " << endl;
        cin >> feet;
        cout << "\n Enter inches: " << endl;
        cin >> inches;
    }
    void showDistance() // Display information
    {
        cout << "Feet: " << feet;
        cout << " Inches: " << inches;
    }
    void addDistance(Distance d1, Distance d2);
    Distance addDistance2(Distance d1);
};

// Main Program Program

int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    Distance d2(8, 2);
    Distance d3(2,4);

    cout << "\nd1 = ";
    d1.showDistance();

    cout << "\nd2 = ";
    d2.showDistance();

    cout << "\nd3 = ";
    d3.showDistance();

    d4.addDistance(d2,d3);
    cout << "\nd4 = ";
    d4.showDistance();

    d4 = d4.addDistance2(d2);
    cout << "\nd4 new  = ";
    d4.showDistance();
    return 0;

}

// Function Definitions
void Distance::addDistance(Distance d1, Distance d2)   // Belongs to the class. A method for members only.
// Template: CLASSNAME::Function_name()
// 1) Declare prototype inside class
// 2) Definition is outside class
// 3) Use the scope resolution operator ::
{
    inches = d1.inches + d2.inches;     // Add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;         // Check for extra feet
    }
    feet += d1.feet + d2.feet;      // Add feet
}
Distance Distance::addDistance2(Distance d1)
{
    Distance temp;      //Initial values 0, 0
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet += 1;
    }
    temp.feet += feet + d1.feet;
    return temp;
}