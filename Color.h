// COMSC-210 | Lab 14 | Dat Hoang Vien
// IDE used: Visual Code Studio

#pragma once

// Libraries
#include <iostream>
using namespace std;

// Color class
class Color
{
private:
    int red;        // Red value
    int green;      // Green value
    int blue;       // Blue value

public:
    // Constants
    static const int MAX_RGB = 255;
    static const int MIN_RGB = 0;

    // Accessors / Getters
    int getRed()
    {
        return red;        // Return the red value
    }

    int getGreen()
    {
        return green;      // Return the green value
    }

    int getBlue()
    {
        return blue;       // Return the blue value
    }

    // Mutators / Setters
    void setRed(int r)
    {
        if (r < MIN_RGB || r > MAX_RGB)
        {
        }
        red = r;          // Assign red = r
    }

    void setGreen(int g)
    {
        green = g;        // Assign green = g
    }

    void setBlue(int b)
    {
        blue = b;         // Assign blue = b
    }

    // Methods
    /*
        print()
        Display the Color's red, green, and blue values to the console
        Arguments: none
        Return: none
    */
    void print()
    {
        // Display the color values
        cout << " - Red: " << getRed() << endl;          // Red
        cout << " - Green: " << getGreen() << endl;      // Green
        cout << " - Blue: " << getBlue() << endl;        // Blue
    }
};