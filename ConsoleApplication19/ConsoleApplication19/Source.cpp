#include <stdio.h>

int main(void)
{
	int i, j;
	i = 3;
	while (i <= 7){
		for (j = 5; j >= i; j = j - 2);
			printf("%d", i + j);
		}
	printf("\n");
	i = i + 3;

	printf("%d%d\n", i, j);

			return(0);

	}