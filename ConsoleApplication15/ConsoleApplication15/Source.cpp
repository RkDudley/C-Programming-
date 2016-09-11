//
//You have saved $500 to use as a down payment on a car. Before beginning your car shopping, you decide to write a program to help you figure out what your monthly payment will be, 
//given the car’s purchase price, the monthly interest rate, and the time period over which you will pay back the loan. The formula for calculating your payment is below,
//where
//P = principal (the amount you borrow)
//i = monthly interest rate ( 1/12 of the annual rate)
//n = total number of payments
//Your program should prompt the user for the purchase price, the down payment,the annual interest rate and the total number of payments (usually 36, 48, or 60). 
//It should then display the amount borrowed and the monthly payment including a dollar sign and two decimal places.
#include <stdio.h>
#include <math.h>

double payment(double monthly_rate, double principle);


int main(void) {
	int time36, time48, time60;
	double payment(double a)
,		principle,         /*the amount of you borrow*/
		monthly_rate,      /*monthly interest rate*/
		down_payment,      /*down payment*/
		annual_rate,       /*annual interest rate*/
		car_price;         /*car price on market marked*/

	printf("Enter car price>\n");
	scanf("%lf", &car_price);
	printf("Enter down payment>\n");
	scanf("%lf", &down_payment);
	printf("Enter annual interest rate>\n");
	scanf("%lf", &monthly_rate);
	printf("Enter time period you will pay back of your loan 36,48,60 >\n");
	scanf("%d%d%d", &time36,&time48, &time60);

	/*calculate amount loan of a car*/
	principle = car_price - down_payment;

	/*calculate monthly interest rate to annual interest rate*/
	monthly_rate = annual_rate / 12;
	
	/*Display the purchase price*/
	printf("purchase price is $%.2f\n", principle);

	/*display down payment*/
	printf("dowm payment is $%.2f\n", down_payment);

	/*display the annual interest rate*/
	printf("The annual interest rate is %.2f\n", annual_rate);

	/*display the total months of payment*/
	printf("36 = %.2f per month\n"), time36;
	printf("48 = %.2f per month\n"), time48;
	printf("60 = %.2f per month\n"), time60;


	getchar();
	return (0);


}

double payment(double monthly_rate,double principle){

	double a;
	a = monthly_rate*principle / (1 - pow((1 + monthly_rate), -36));
	return (a);



}