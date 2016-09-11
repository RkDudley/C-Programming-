#include <stdio.h>
#include <math.h>
#include <concrt.h>

int main(void){

	double x, y, a;
	char n;

	printf("Enter a first real number \n");
	scanf("%lf", &x);
	printf("Enter the operation perform (+,-,* or /)\n");
	scanf("%c", &n);
	printf("Enter a second real number \n");
	scanf("%lf", &y);

	if (n == '+')
	{
		a = x + y;
		printf("%f", x + y);
	}
	else if (n == '-')
	{
		a = x - y;
		printf("%f", x - y);
	}
	else if (n == '*')
	{
		a = x * y;
		printf("%f", x*y);
	}
	else if (n == '%')
	{
		a = x / y;
		printf("%f", x / y);
	}
	else
		printf("Error occur\n");


	getchar();

	return(0);



}