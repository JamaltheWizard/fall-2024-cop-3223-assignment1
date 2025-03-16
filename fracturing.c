//********************************************************
// Assignment-1-program.c
// Author: Jamal Bouarib
// Date: 9/8/24
// Class: COP 3223, 
// Purpose: This program is designed to calculate Area, width,Height
// and Perimeter of a city. 
// Inputs: xOne, xTwo, yOne, yTwo
//
// Output: Distance, Perimeter, Area, Width, Height
// //********************************************************
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define PI 3.14159

// Helper function inputs x values
double askXCoordinateInputs() 

{

    double xCoordinate;
    scanf("%lf", &xCoordinate);

    return xCoordinate;
}
 // Helper function inputs y values
 double askYCoordinateInputs() 
 {

    double yCoordinate;
    scanf("%lf", &yCoordinate);
    
    return yCoordinate;
}

// Calculates distance
double calculateDistance() 
{ 
    // Calls functions for inputing x and y values
    double xOne= askXCoordinateInputs();
    double xTwo= askXCoordinateInputs();
    double yOne= askYCoordinateInputs();
    double yTwo= askYCoordinateInputs();

    // Outputs the points you entered
    printf(" \n Point #1 entered: x1 = %.3f; y1= %.3f \n",xOne, yOne);
    printf(" \n Point #2 entered: x2 = %.3f; y2= %.3f \n",xTwo, yTwo);

    // Finds the difference between x and y values
    double xDifference = (xOne - xTwo);                              
    double yDifference = (yOne - yTwo);                         
     //This calculates and outputs the distance which is the diameter
    double distance=pow((pow(xDifference, 2 ) + pow(yDifference, 2)), 0.5);   
    printf(" The distance between the two points is %.3f \n ", distance);

    // returns distance to any function that calls it.
    return distance;
} 

// Calculates perimeter
double calculatePerimeter()
{

    double diameter=calculateDistance();
    double perimeter= PI*diameter;
    printf("The perimeter of the city encompassed by your request is %.3f \n", perimeter);

    return 2.0;
}

// Finds the Area
double calculateArea()
{
    double diameter=calculateDistance();
    double area = PI*pow((diameter/2),2);

    printf("The area of the city encompassed by your request is %.3f \n", area);

    return 1.0;
}

double calculateWidth()
{
    double width=calculateDistance();
    printf("The width of the city encompassed by your request is %.3f \n", width );

    return 1.0;
}

double calculateHeight()
{
    double height=calculateDistance();
    printf("The height of the city encompassed by your request is %.3f \n", height );

    return 1.0;
}




// Calls other Functions
int main(int argc, char **argv) 
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth ();
  calculateHeight();



    return 0;
}