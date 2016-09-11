#include <stdio.h>
#include <math.h>

int main(void)
{
	int times;				 //the time period over you will pay back
	double principle,		 // the amount you borrow
		   car_price,		 // the purchase price
		   down_payment,	 // down payment
		   annual_rate,		 // annual interest rate
		   monthly_rate,	 // monthly interest rate
		   monthly_payment;  //your monthly payment

	/*Get data */

	printf("The car price>\n");      
	scanf("%lf", &car_price);
	printf("down payment>\n");
	scanf("%lf", &down_payment);
	printf("The annual rate>\n");
	scanf("%lf", &annual_rate);
	printf("Enter time period of car loan\n 36,48 or 60\n");
	scanf("%d", &times);

	//calculate principle
	principle = car_price - down_payment;

	//calculate monthly interest rate in decimal
    monthly_rate = (annual_rate/12)/100;

	//calculate monthly payment
	monthly_payment = monthly_rate*principle / (1 - pow((1 + monthly_rate), -times));

	/*Display the purchase price*/
	printf("The car price is $ %.2f\n", car_price);

	/*display down payment*/
	printf("dowm payment is $ %.2f\n", down_payment);

	/*display the annual interest rate*/
	printf("The annual interest rate is %.2f\n", annual_rate);

	//display time period you will pay back
	printf("the time period is %d months\n", times);

	//display the amount of you borrowed
	printf("the amount borrowed is %.2f\n", principle);

    // display the monthly payment 
	printf("the monthly loan is $ %.2f", monthly_payment); 

	getchar ();

	return (0);


}


