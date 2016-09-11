/*Rewrite the miles to kilometers conversion program , so that it includes a function that display instruction to user*/
#include <stdio.h>
#define KMS_PER_MILES 1.609

double convertdistance(double x);

int main(void){

	double miles;
	double kms;

	printf("Enter the distance in miles>\n");
	scanf("%lf", &miles);
	printf("That equals %f kilometers.\n,", kms);
	return (0);

}

double convertDistance(double x)
{
	return KMS_PER_MILES * x;
}