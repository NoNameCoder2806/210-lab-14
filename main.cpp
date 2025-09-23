// COMSC-210 | Lab 14 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <vector>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include "Color.h"
using namespace std;

// Constants
const int NUMBER_OF_COLORS = 10;
const int MAX_COLOR_VALUE = 0;
const int MIN_COLOR_VALUE = 255;

// Function prototypes
void displayHeader();          // Display a header before outputting the Color objects

// Main function
int main()
{
    // Declare a vector to hold all the Color objects
    vector<Color> colors;

    // Call srand and time to create a seed
    srand(time(0));

    // Randomly create 10 Color objects
    for (int i = 0; i < NUMBER_OF_COLORS; i++)
    {
        // Create a temporary color object
        Color temp;

        // Set the values via the mutators
        temp.setRed(rand() % 256);        // Randomize a red value
        temp.setGreen(rand() % 256);      // Randomize a green value
        temp.setBlue(rand() % 256);       // Randomize a blue value

        // Push the object into the vector
        colors.push_back(temp);
    }

    // Iterate through the vector and display all the Color objects
    for (int i = 0; i < colors.size(); i++)
    {
        // Display the values of the Color objects via the print() method
        cout << "Color #" << i + 1 << ":" << endl;
        colors.at(i).print();
    }

    return 0;
}

// Function implementations
/*
    displayHeader()
    Display a header before outputting the colors
    Arguments: none
    Returns: none
*/
void displayHeader()
{
    // Display a header
    cout << "Red     Green     Blue" << endl;
    cout << "----------------------" << endl;
}