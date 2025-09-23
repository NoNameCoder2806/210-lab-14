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
    static const int MAX_RGB = 255;      // Max RGB value
    static const int MIN_RGB = 0;        // Min RGB value

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
        if (r < MIN_RGB)      // If the value is smaller than MIN_RGB
        {
            r = MIN_RGB;      // Set it to the MIN_RGB value
            red = r;          // Assign red = r
        }
        else if (r > MAX_RGB) // If the value is larger than MAX_RGB
        {
            r = MAX_RGB;      // Set it to the MAX_RGB value
            red = r;          // Assign red = r
        }
        else                  // If the value is valid
        {
            red = r;          // Assign red = r
        }
    }

    void setGreen(int g)
    {
        if (g < MIN_RGB)      // If the value is smaller than MIN_RGB
        {
            g = MIN_RGB;      // Set it to the MIN_RGB value
            green = g;        // Assign green = g
        }
        else if (g > MAX_RGB) // If the value is larger than MAX_RGB
        {
            g = MAX_RGB;      // Set it to the MAX_RGB value
            green = g;        // Assign green = g
        }
        else                  // If the value is valid
        {
            green = g;        // Assign green = g
        }
    }

    void setBlue(int b)
    {
        if (b < MIN_RGB)      // If the value is smaller than MIN_RGB
        {
            b = MIN_RGB;      // Set it to the MIN_RGB value
            blue = b;         // Assign blue = b
        }
        else if (b > MAX_RGB) // If the value is larger than MAX_RGB
        {
            b = MAX_RGB;      // Set it to the MAX_RGB value
            blue = b;         // Assign blue = b
        }
        else                  // If the value is valid
        {
            blue = b;         // Assign blue = b
        }
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