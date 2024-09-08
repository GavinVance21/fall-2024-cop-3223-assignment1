#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf%lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf%lf", &x2, &y2);
    
    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = calculatePerimeter(width,height);
    double area = calculateArea(width,height);
    double width = calculateWidth(x1,x2);
    double height = calculateHeight(y1,y2);
    printf("Distance: %lf\n", distance);
    printf("Perimeter: %lf\n", perimeter);
    printf("Area: %lf\n", area);
    printf("Width: %lf\n", width);
    printf("Height: %lf\n", height);

    return 0;
}
double calculateDistance(double x1, double y1, double x2, double y2){ 
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
double calculatePerimeter(double width, double height){
    return 2 * (width+height);
}
double calculateArea(double width, double height){
    return width*height;
}
double calculateWidth(double x1, double x2){
    return fabs(x2-x1);
}
double calculateHeight(double y1, double y2){
    return fabs(y2-y1)
}