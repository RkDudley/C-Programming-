#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double princ, rate, term, monthly;

	printf("Please enter the the principle on your payment: ");
	scanf("%lf", &princ);
	printf("Please enter the rate on your payment: ");
	scanf("%lf", &rate);
	printf("Please enter the term of your payment in years: ");
	scanf("%lf", &term);

	rate = (rate / 1200);
	term = (term * 12);

	monthly = ((rate + (rate / (pow((1 + rate), (term)-1)))) * princ);

	printf("Your monthly payment is: %f", monthly);


	return (0);

}