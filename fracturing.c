//********************************************************
// fracturing.c
// Author: Willian Francisco
// Date: 8/30/23
// Class: COP 3223, Professor Parra
// Purpose:
//
//
//
// Input: 
//
// Output:
// //********************************************************

#include <stdio.h>
#include <math.h>

// define PI as instructed
#define PI 3.14

// Function for calculating width
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    askForUserInput();


    return 0;

}

// Function for calculating distance
double calculateDistance() {  

    // Point #1 variables
    int x1 = 1;
    int x2 = 1;

    // Point #2 variables
    int y1 = 2;
    int y2 = 2;

    // Scanf and printf statements for point #1
    scanf("%d %d", &x1, &y1);
    printf("Point #1 entered: x1 = %d y1 = %d \n", x1, y1);
    
    // Scanf and printf statements for point #2
    scanf("%d %d", &x2, &y2);
    printf("Point #2 entered: x2 = %d y2 = %d \n", x2, y2);

    // Define Distance variable and print statement for distance.
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

// Function for calculating perimeter
double calculatePerimeter() {

    int width = 0;
    int height = 0;
    calculateWidth();
    calculateHeight();
    double difficulty = 4.0;

    // Point #1 variables
    int x1 = 1;
    int x2 = 1;

    // Point #2 variables
    int y1 = 2;
    int y2 = 2;

    scanf("%d %d", &x1, &y1);
    printf("Point #1 entered: x1 = %d y1 = %d \n", x1, y1);
    
    // Scanf and printf statements for point #2
    scanf("%d %d", &x2, &y2);
    printf("Point #2 entered: x2 = %d y2 = %d \n", x2, y2);

    // not yet done
    double perimeter = 2 * squirt(width + height);
    printf("The permeter of the city encompassed by your request is %f\n", perimeter);

    return difficulty;
}

// Function for calculating area
double calculateArea() {

    int width = 0;
    int height = 0;
    calculateWidth();
    calculateHeight();
    double difficulty = 4.0;

    // Point #1 variables
    int x1 = 1;
    int x2 = 1;

    // Point #2 variables
    int y1 = 2;
    int y2 = 2;

    // line 1
    scanf("%d %d", &x1, &y1);
    printf("Point #1 entered: x1 = %d y1 = %d \n", x1, y1);
    
    // Scanf and printf statements for point #2
    scanf("%d %d", &x2, &y2);
    printf("Point #2 entered: x2 = %d y2 = %d \n", x2, y2);

    // line 3
    double area = (width * height);
    printf("The area of the city encompassed by your request is %f\n", area);

    return difficulty;
}

// Function for calculating Width
double calculateWidth() {

    double difficulty = 4.0;

    // Point #1 variables
    int x1 = 1;
    int x2 = 1;

    // Point #2 variables
    int y1 = 2;
    int y2 = 2;

    // line 1
    scanf("%d %d", &x1, &y1);
    printf("Point #1 entered: x1 = %d y1 = %d \n", x1, y1);
    
    // Scanf and printf statements for point #2
    scanf("%d %d", &x2, &y2);
    printf("Point #2 entered: x2 = %d y2 = %d \n", x2, y2);

    // line 3
    double width = (x2 - x1);
    printf("The width of the city encompassed by your request is %f\n", width);


    return difficulty; 

}

// Function for calculating height
double calculateHeight() {

    double difficulty = 4.0;

    // Point #1 variables
    int x1 = 1;
    int x2 = 1;

    // Point #2 variables
    int y1 = 2;
    int y2 = 2;

    // line 1
    scanf("%d %d", &x1, &y1);
    printf("Point #1 entered: x1 = %d y1 = %d \n", x1, y1);
    
    // Scanf and printf statements for point #2
    scanf("%d %d", &x2, &y2);
    printf("Point #2 entered: x2 = %d y2 = %d \n", x2, y2);

    // line 3
    double height = (y2 - y1);
    printf("The height of the city encompassed by your request is %f\n", height);

    return difficulty;

}

// Bonus: Function for asking user input
double askForUserInput() {

    int use_input = 1;

    return use_input;

}
