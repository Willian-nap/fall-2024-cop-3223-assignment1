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

    // Prints the first line 
	printf("Point #1 entered: x1 = %lf y1 = %lf \n", x1, y1);

	// Scanf and printf statements for point #2
	printf("Point #2 entered: x2 = %lf y2 = %lf \n", x2, y2);
	
	double user_input = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return user_input;

}

// Function for calculating distance
double calculateDistance() {

	// Point #1 variables
	double x1, x2, y1, y2;

	double distance = askForUserInput();

	// Define Distance variable and print statement for distance.
	printf("The distance between the two points is %f\n", distance);

	return distance;
}



// Function for calculating Width
double calculateWidth() {


    double x1, x2, y1, y2;
    
	double difficulty = 4.0;
	double distance = askForUserInput();

	// line 3
	int width = distance;
	printf("The width of the city encompassed by your request is %d\n", width);


	return difficulty;

}

// Function for calculating height
double calculateHeight() {


    double x1, x2, y1, y2;

	double difficulty = 4.0;
	double distance = askForUserInput();

	// line 3
	int height = distance;
	printf("The height of the city encompassed by your request is %d\n", height);

	return difficulty;

}

// Function for calculating perimeter
double calculatePerimeter() {
    
    double x1, x2, y1, y2;
	double difficulty = 4.0;
	int distance = askForUserInput();

	// not yet done
	int perimeter = 2 * (distance + distance);
	printf("The perimeter of the city encompassed by your request is %d\n", perimeter);

	return difficulty;
}

// Function for calculating area
double calculateArea() {

    double x1, x2, y1, y2;
	double difficulty = 4.0;
	int distance = askForUserInput();

	// line 3
	int area = pow(distance, 2);
	printf("The area of the city encompassed by your request is %d\n", area);

	return difficulty;
}



// Function for calculating width
int main(int argc, char **argv) {

	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();

	return 0;
}