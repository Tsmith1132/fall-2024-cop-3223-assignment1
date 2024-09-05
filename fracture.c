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
	double distance = sqrt(pow(pointx2 - pointx1, 2) + pow(pointy2 - pointy1, 2));
	
	printf("The points you entered where (%lf,%lf) and (%lf, %lf)\n", pointx1, pointy1, pointx2, pointy2);
	printf("The distance between these two points is %lf\n\n", distance);
	
	return distance;
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
	
	double perimeter = diameter * PI;
	
	printf("The points you entered where (%lf,%lf) and (%lf, %lf)\n", pointx1, pointy1, pointx2, pointy2);
	printf("The perimeter based on the two points you entered is %lf\n\n", perimeter);
	
	double difficulty = 2.0;
	
	printf("I found this function to be a %lf out of 5 in difficulty\n\n", difficulty);
	
	return difficulty;
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
	
	double area = PI * pow(radius, 2);
	
	printf("The points you entered where (%lf,%lf) and (%lf, %lf)\n", pointx1, pointy1, pointx2, pointy2);
	printf("The area based on the two points you entered is %lf\n", area);
	
	double difficulty = 2.0;
	
	printf("I found this function to be a %lf out of 5 in difficulty\n\n", difficulty);
	
	return difficulty;
}

double calculateWidth(){
	double pointx1, pointy1, pointx2, pointy2;
	
	printf("Enter the x1 coordinate\n");
	scanf("%lf", &pointx1);
	printf("Enter the y1 coordinate\n");
	scanf("%lf", &pointy1);
	printf("Enter the x2 coordinate\n");
	scanf("%lf", &pointx2);
	printf("Enter the y2 coordinate\n");
	scanf("%lf", &pointy2);
	// looked up how to do absolute value
	double width = fabs(pointx1 - pointx2);
	
	printf("The points you entered where (%lf,%lf) and (%lf, %lf)\n", pointx1, pointy1, pointx2, pointy2);
	printf("The width between the points you entered is %lf\n", width);
	
	double difficulty = 2;
	
	printf("I found this function to be a %lf out of 5 in difficulty\n\n", difficulty);
	
	return difficulty;
}

double calculateHeight(){
	double pointx1, pointy1, pointx2, pointy2;
	
	printf("Enter the x1 coordinate\n");
	scanf("%lf", &pointx1);
	printf("Enter the y1 coordinate\n");
	scanf("%lf", &pointy1);
	printf("Enter the x2 coordinate\n");
	scanf("%lf", &pointx2);
	printf("Enter the y2 coordinate\n");
	scanf("%lf", &pointy2);
	// looked up how to do absolute value
	double height = fabs(pointy1 - pointy2);
	
	printf("The points you entered where (%lf,%lf) and (%lf, %lf)\n", pointx1, pointy1, pointx2, pointy2);
	printf("The width between the points you entered is %lf\n", height);
	
	double difficulty = 2;
	
	printf("I found this function to be a %lf out of 5 in difficulty\n\n", difficulty);
	
	return difficulty;
}
int main(int argc, char **argv){
	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();
return 0;
    
}