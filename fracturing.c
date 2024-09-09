//Gavin Vance
//09/08/2024
//Assignment 1
//UCFID 5562231
#include <stdio.h>
#include <math.h>

//I defined PI here.

#define PI 3.14159

//I set up a function that will take in the user input once and be able to use for all
//the other functions. I had a little bit of help in the Discord regarding setting up the print
//statements.

double askForUserInput(){

    int pointx1=0;
    int pointy1=0;
    int pointx2=0;
    int pointy2=0;
    printf("Enter an x value for point 1:");
    scanf("%i", &pointx1);
    printf("Enter an y value for point 1:");
    scanf("%i", &pointy1);
    printf("Enter an x value for point 2:");
    scanf("%i", &pointx2);
    printf("Enter an y value for point 2:");
    scanf("%i", &pointy2);
    printf("Point 1 entered: x1 = %i", pointx1);
    printf(";y1 = %i\n",pointy1);
    printf("Point 1 entered: x2 = %i", pointx2);
    printf(";y2 = %i\n",pointy2);

    double diameter=sqrt(pow((pointx2-pointx1),2)+pow((pointy2-pointy1),2));

    return diameter;
}

//This function calculates the distance. Print statements give me a difficult time so I had to 
//refer back to Lab 1 for this.

double calculateDistance(){ 

    double distance=askForUserInput();
    printf("The distance between the two points is: %.2f\n",distance);

    return distance;
}

//This one is similar to the last function regarding the print statement, the difference is
//I had to figure out the perimeter using diameter and PI and that made the function much more
//difficult to code.

double calculatePerimeter(){

    double difficult=5;
    double diameter=askForUserInput();
    double perimeter=diameter*PI;
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);

    return difficult;
}

//This function calculates the area of a circle. This was pretty difficult due to
//having to make a formula for area.

double calculateArea(){

    double difficult=4;
    double diameter=askForUserInput();
    double area=PI*(pow((diameter/2),2));
    printf("The area of the city encompassed by your request is: %.2f\n", area);

    return difficult;
}

//This function and the height function were the easiest to make. They are very similar to
//the distance function.

double calculateWidth(){

    double difficult=3;
    double width=askForUserInput();
    printf("The width of the city encompassed by your request is: %.2f\n", width);
    
    return difficult;
}

//Same reasons as I listed for the last function (easiest to code and very similar to
//the distance function).

double calculateHeight(){

    double difficult=3;
    double height=askForUserInput();
    printf("The height of the city encompassed by your request is: %.2f\n", height);
    
    return difficult;
}

//This is my main function which is written just like the example given in the pdf. I
//did ask Mido and a few students in Discord for clarification on whether it should remain
//the same or not. This will be used to call all my other functions.

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}