#include <stdio.h>
#include <math.h>

#define PI 3.14

float E_distance(int x1, int y1, int x2, int y2);
float areaOfCircle(int x1, int y1, int x2, int y2, float (* distance)(int, int, int , int));

int main(void)
{
	int x1, y1, x2, y2;
	printf("Enter the coordinates in the format:- (x,y)\n");
	printf("Enter the coordinates of the first point: ");
	scanf("(%d,%d)", &x1, &y1);
	getchar();
	printf("Enter the coordinates of the second point: ");
	scanf("(%d,%d)", &x2, &y2);

	printf("%.4f\n", areaOfCircle(x1, y1, x2, y2, E_distance));

	return 0;
}

float E_distance(int x1, int y1, int x2, int y2)
{
	float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return distance;
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (* distance)(int, int, int , int))
{
	float radius = distance(x1, y1, x2, y2);		// If we pass &E_distance to the function then we need to write *distance() 
	float area = PI * radius * radius;
	return area;
}