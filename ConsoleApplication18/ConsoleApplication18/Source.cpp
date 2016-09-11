#include <stdio.h>

int main(void){

	int product, count,x;
	printf("Enter an inteeger >");
	scanf("%d", &x);
	product = x;
	count = 0;
	while (count < 4){
		printf("%d\n", product);
		product *= x;
		count += 1;
	}
	getchar();
	return(0);
}