#include <stdio.h>
#include <math.h>
#define PI 3.14159

// calculates distance between two points using the distance formula (asked chat gpt how to put the formula into code)
double calculateDistance(){
	double pointx1, pointy1, pointx2, pointy2; 
	
	printf("Enter the x1 coordinate\n");
	scanf("%lf", &pointx1);
	printf("Enter the y1 coordinate\n");
	scanf("%lf", &pointy1);
	printf("Enter the x2 coordinate\n");
	scanf("%lf", &pointx2);
	printf("Enter the y2 coordinate\n");
	scanf("%lf", &pointy2);
// finds distance based off points entered
	return sqrt(pow(pointx2 - pointx1, 2) + pow(pointy2 - pointy1, 2));
}

// calculates the perimeter of the circle based off the points entered 
double calculatePerimeter(){
	double pointx1, pointy1, pointx2, pointy2;
	
	printf("Enter the x1 coordinate\n");
	scanf("%lf", &pointx1);
	printf("Enter the y1 coordinate\n");
	scanf("%lf", &pointy1);
	printf("Enter the x2 coordinate\n");
	scanf("%lf", &pointx2);
	printf("Enter the y2 coordinate\n");
	scanf("%lf", &pointy2);
// finds the distance between the points entered (diameter)
	double diameter = sqrt(pow(pointx2 - pointx1, 2) + pow(pointy2 - pointy1, 2));
// returns the perimeter by multiplying diameter by Pi
	return diameter * PI;
}

double calculateArea(){
	double pointx1, pointy1, pointx2, pointy2;
	
	printf("Enter the x1 coordinate\n");
	scanf("%lf", &pointx1);
	printf("Enter the y1 coordinate\n");
	scanf("%lf", &pointy1);
	printf("Enter the x2 coordinate\n");
	scanf("%lf", &pointx2);
	printf("Enter the y2 coordinate\n");
	scanf("%lf", &pointy2);
	double radius = pow(pointx2 - pointx1, 2) + pow(pointy2 - pointy1, 2);
	
	return PI * pow(radius, 2);
}

//double calculateWidth();

//double calculateHeight();


int main(int argc, char **argv){

	double distance = calculateDistance();
    printf("The distance between the two points you entered is %lf\n", distance);

	double perimeter = calculatePerimeter();
	printf("The perimeter based on the two points you entered is %lf\n", perimeter);
	
	double area = calculateArea();
	printf("The area of the circle based on the two points you entered is %lf\n", area);
    return 0;
    
}
