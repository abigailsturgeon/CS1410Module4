// File: Counter
// Created by Abigail Sturgeon on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants
class Counter
{
private:
    unsigned int count;
public:
    // Constructor
    Counter(): count(100)
    {/* Empty body*/}
    void incCount() // Increment count
    {
        count++;
    }
    int getCount() // Return count
    {
        return count;
    }
};

// Main Program Program

int main()
{
    Counter c1, c2;

    cout << "\nc1=" << c1.getCount();   // Display
    c1.incCount();      // Increment c1
    cout << "\nc1=" << c1.getCount();   // Display

    cout << "\nc2=" << c2.getCount();   // Display
    c2.incCount();      // Increment c2
    cout << "\nc2=" << c2.getCount();   // Display
    return 0;

}

