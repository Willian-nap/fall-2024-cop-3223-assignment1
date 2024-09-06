//********************************************************
// fracturing.c
// Author: Willian Francisco
// Date: 8/30/23
// Class: COP 3223, Professor Parra
// Purpose: create different functions and use them to avoid
// repeating lines of code.
//
// Input: x1, x2, y1, y2
//
// Output: Three lines of output representing the values and
// calculation made in the function.
// //********************************************************

#include <stdio.h>
#include <math.h>

// define PI as instructed.
#define PI 3.14

// Bonus function, asks for user input.
double askForUserInput() {

    // state variables.
	double x1, x2, y1, y2;

	// printf statements to ask the user for the value.
    // scanf statements to get the values.
	printf("Input value for x1: ");
	scanf("%lf", &x1);
	printf("Input value for x2: ");
	scanf("%lf", &x2);
	printf("Input value for y1: ");
	scanf("%lf", &y1);
	printf("Input value for y2: ");
	scanf("%lf", &y2);

    // Prints the first line.
	printf("Point #1 entered: x1 = %.3lf y1 = %.3lf\n", x1, y1);

	// Scanf and printf statements for point #2.
	printf("Point #2 entered: x2 = %.3lf y2 = %.3lf\n", x2, y2);
	
	// calculates the user input into distance.
	// Calculation made separately so it could be used for other functions.
	
    
    // returns the calculated value to be used by other functions.
	return ;
}

// Function for calculating distance.
double calculateDistance() {

	// State variables.
	double x1, x2, y1, y2;
    
    // calls helper function.
	double distance = askForUserInput();

	// Print statement for distance.
	// \n\n added to make the output easier to read.
	// %.3lf round to 3 decimal spaces.
	printf("The distance between the two points is %.3lf\n\n", distance);
    
    // Returns double equal to distance.
	return distance;
}

// Function for calculating Width.
double calculateWidth() {

    // State variables.
    double x1, x2, y1, y2;
    
    // State difficulty variable.
	double difficulty = 4.0;
	
	// call the function.
	double distance = askForUserInput();

	// Set width equal to distance and print width.
	double width = distance;
	printf("The width of the city encompassed by your request is %.3lf\n\n", width);

	return difficulty;
}

// Function for calculating height
double calculateHeight() {

    // state variables.
    double x1, x2, y1, y2;
    
    // State difficulty variable.
	double difficulty = 4.0;
	
	// Call the function.
	double distance = askForUserInput();

	// Set height equal to distance and print height.
	double height = distance;
	printf("The height of the city encompassed by your request is %.3lf\n\n", height);
    
	return difficulty;
}

// Function for calculating perimeter
double calculatePerimeter() {
    
    // State variable.
    double x1, x2, y1, y2;
    
    // State difficulty variable.
	double difficulty = 4.0;
	
	// Call the function.
	double distance = askForUserInput();

	// Calculate and print perimeter.
	double perimeter = 2 * (distance + distance);
	printf("The perimeter of the city encompassed by your request is %.3lf\n\n", perimeter);
    
	return difficulty;
}

// Function for calculating area
double calculateArea() {

    // State variable.
    double x1, x2, y1, y2;
    
    // State difficulty variable.
	double difficulty = 4.0;
	
	// Call the function.
	double distance = askForUserInput();

	// Calculate and print area.
	double area = pow(distance, 2);
	printf("The area of the city encompassed by your request is %.3lf\n\n", area);
    
	return difficulty;
}

// Function for calculating width
int main(int argc, char **argv) {
    
    // call functions in order
	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();

	return 0;
}
