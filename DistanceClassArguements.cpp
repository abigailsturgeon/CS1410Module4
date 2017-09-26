// File: DistanceClassArguements
// Created by Abigail Sturgeon on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;
/* Task: Define a class that stores
 * int feet and float inches
 * Two methods: setDistance -> Set the information
 *              getDistance -> Set the information with customer input
 *             showDistance -> Display values
 */

// Constants, Structures, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
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
        cout << "\nFeet: " << feet;
        cout << "\nInches: " << inches;
    }

};

// Main Program Program

int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d2;

    // Use methods to set/access data
    d1.setDistance(6,6.5);
    cout << "\nDistance 1: " << endl;
    d1.showDistance();

    // Display distance 2
    cout << "\nDistance 2: " << endl;
    d2.setDistance(3,1.5);
    d2.showDistance();

    // Update information for distance 2
    d2.getDistance();
    cout << "\nDistance 2: " << endl;
    d2.showDistance();


    return 0;

}

