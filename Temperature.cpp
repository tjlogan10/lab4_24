#include "Temperature.h"
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

// Constructor for the 'Temp' class.
Temp::Temp()
{
    temp = 0;
    count = 0;
};
// Postcondition: Initializes 'temp' to 0 and 'count' to 0.

// Destructor for the 'Temp' class.
Temp::~Temp() {};

// Set function for 'temp' variable.
// Makes "Temp_" an integer that represents a temp value
void Temp::settemp(int temp_)
{
    temp = temp_;
};
// Postcondition: Sets the 'temp' member variable to the value of 'temp_'.

// Function to generate a temperature chart.
// Precondition: 'temp' represents a valid temperature value.
void Temp::TemperatureChart()
{
    // Check if the temperature is outside the valid range (-30 to 120).
    if (temp < -30 || temp > 120)
    {
        cout << "ERROR: Temperature is not in the given range!" << endl;
    }
 
       int zeroPosition = 10;  // Adjusted to align zero under the 0-degree mark

       // Display the temperature value on the left
       cout << left << setw(4) << temp << ": ";

       // Calculate the number of stars needed based on the temperature
       int numStars = round(abs(temp) / 3);
    

       if (temp < 0) {
           // For negative temperatures, print stars to the left of the bar
           cout << string(zeroPosition - numStars, ' ') << string(numStars, '*') << '|'<< endl;
       }
       else if (temp == 0) {
           // For zero temperature, just print the bar
           cout << string(zeroPosition, ' ') << '|'<< endl;
       }
       else {
           // For positive temperatures, print stars to the right of the bar
           cout << string(zeroPosition, ' ') << '|' << string(numStars, '*')<< endl;
       }
};
// Postcondition: Prints a temperature chart to the user, uses *'s to represent the data
