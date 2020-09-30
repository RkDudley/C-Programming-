#include <stdio.h>

void draw_parallel(void);		/*fuction prototypes*/
void draw_rectiangle(void);		/*fuction prototypes*/
void draw_base(void);			/*fuction prototypes*/

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
		printf("________\n");
	}

	void _draw_rectiangle(void){

		draw_base();
		draw_parallel();
		draw_base();

	}
