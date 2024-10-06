// New Chapter 2 Ex 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    const double risePerYear = 1.5; // Millimeters per year

    // Calculate the rise for different years
    double riseIn5Years = risePerYear * 5;
    double riseIn7Years = risePerYear * 7;
    double riseIn10Years = risePerYear * 10;

    // Display the results
    cout << "In 5 years, the ocean level will be " << riseIn5Years << " millimeters." << endl;
    cout << "In 7 years, the ocean level will be " << riseIn7Years << " millimeters." << endl;
    cout << "In 10 years, the ocean level will be " << riseIn10Years << " millimeters." << endl;

    return 0;
}
