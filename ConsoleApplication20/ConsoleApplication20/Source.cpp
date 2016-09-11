#include <stdio.h>

int main(void)
{
	int i, count;
	count = 0;
	for (i = 1; i <= 8; i++)
		if (i % 2 == 0)
			count++;
	printf("%d", count);
	return 0;
}
