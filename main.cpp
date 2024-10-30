/*
 Travis Logan
 C++ Fall 2024
 Due: Oct. 29 2024
 Lab 4: Temperature Output
 Lab Description: This lab demonstrates the ability to create a program that uses basic if else statements, nested if statements, loops, I/O measures,pre and postcondition usage, and comments. All of these techinques are used to retrieve data from a file and output such to a chart that displays the given temperatures.
 */
#include <iostream> // Standard libraries
#include <fstream>
#include "Temperature.h" // Include the header file
#include <vector>
#include <iomanip> // For setw()

#include "Temperature.h"

using namespace std;  // Standard Namespace Declaration

int main() {
    int temp;  // Creates the variable temp as an integer
    Temp myTemp; // creates object of myTemp in the class Temp
    
    // Gives description of what the data means as well as a chart of what the data should read
    cout << "Hourly Temperatures. Each '*' represents 3 degrees Fahrenheit" << endl;
    cout << "Temperature Bar Chart" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Scale: -30      0         30        60        90       120" << endl;
    cout << "----------------------------------------------------------" << endl;
    // the file stream goes into inFile, it then opens "Tempratures.dat" file
    ifstream inFile;
    inFile.open("/Users/tjlogan/Desktop/Lab4_24/Temperature_data.txt");
    
    // Checks if file is able to open
    if (!inFile) {
        cout << "Error opening file";
        return 0;
    }
    
    // in While loop it sets the variable, as long as there is a variable it then sets the temp and creates a bar chart
    while (inFile >> temp) {
        myTemp.settemp(temp);
        myTemp.TemperatureChart();
    }
    
    // If there is a string or a float input that isnt an integer, this check tells the reader that the data cannot be read in for this specific piece
    if (!inFile.eof()) {
        cout << "Error reading from the file." << endl;
        return 0; 
    }
    // closes the file "Temprature.dat"
       inFile.close();

       // after everything has been read in and the code is on a blank space, it reads this message
       cout << endl << "All data has been read in! " << endl;

       return 0;
   }
