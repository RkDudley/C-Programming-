#include <stdio.h>
/*fuction prototypes*/

void draw_parallel(void);
void draw_rectiangle(void);
void draw_base(void);

int main(void){
	
	draw_rectiangle();

	return (0);
}
	void draw_parallel(void){
		printf("|       |\n");
		printf("|       |\n");
		printf("|       |\n");
		printf("|       |\n");
		printf("|       |\n");
		printf("|       |\n");
	}

	void draw_base(void){
		printf("--------\n");
	}

	void _draw_rectiangle(void){

		draw_base();
		draw_parallel();
		draw_base();

	}