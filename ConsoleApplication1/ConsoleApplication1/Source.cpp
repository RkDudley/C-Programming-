
#include <stdio.h> 

int dispenser(int *value);

int
main(void)
{
	int amount,bills;

	printf("Welcome\n\n>");

	printf("Enter the amount to withdraw >"); // input
	scanf("%d, &amount");

	dispenser(&bills);
	return 0;
}

int dispenser(int *value) {


	int bill_50, bill_20, bill_10;

	if (((*value % 10) == 0) && (*value > 0))
	{
		if (*value >= 50) {
			bill_50 = *value / 50;
			*value = *value % 50;
			printf("No of 50 bills is %d\n", bill_50);
		}

		if (*value >= 20) {
			bill_50 = *value / 20;
			*value = *value % 20;
			printf("No of 20 bills is %d\n", bill_20);
		}
		if (*value >= 10) {
			bill_50 = *value / 10;
			*value = *value % 10;
			printf("No of 10 bills is %d\n", bill_10);
		}



	}
}