/*Write a complete C program that prompts the user for the coordinates of two

3-D points ( x 1 , y 1 , z 1 ) and ( x 2 , y 2 , z 2 ) and displays the distance between them

computed using the following formula:*

*sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2)*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2,
		   y1, y2,
		   z1, z2,
		   distance;

	printf("Enter the point of x1\n>");
	scanf("%lf",&x1);

	printf("Enter the point of y1\n>");
	scanf("%lf",&y1);

	printf("Enter the point of z1\n>");
	scanf("%lf",&z1);

	printf("Enter the point of x2\n>");
	scanf("%lf",&x2);

	printf("Enter the point of y2\n>");
	scanf("%lf",&y2);

	printf("Enter the point of z2\n>");
	scanf("%lf",&z2);

	distance = sqrt(pow(x1 - x2, 2)) + (pow (y1 - y2, 2)) + (pow(z1 - z2, 2));

	printf("The distance between %.2f,%.2f,%.2f,%.2f,%.2f,%.2f is %.2f\n", x1, x2, y1, y2, z1, z2,distance);

	getchar();
	
	return(0);






}