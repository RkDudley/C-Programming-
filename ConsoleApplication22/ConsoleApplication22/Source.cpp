#include <stdio.h>

int main(void) {

	int k[6] = { 0, 0, 0, 0, 0, 0 }; 
		int i, n;

	for (i = 3; i < 6; ++i) {
	
		scanf("%d", &n);
		k[n] = i;
		printf("%d%d", k[1], k[3]);
	}








}