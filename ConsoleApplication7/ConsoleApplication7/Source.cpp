#include <stdio.h>
/* Different type shapes to compute area for. */
#define SELECT_CIRCLE 'C' /* Type Circle */
#define SELECT_SQUARE 'S' /* Type Square */
#define PI 3.14159265
int
main(void)
{
	char type; /* Type of shape. */
	double area, side_base, radius;
	/* Display menu and get the type of shape to compute the area. */
	printf("Enter a:\n");
	printf(" %c -- To compute the area of a circle.\n",
		SELECT_CIRCLE);
	printf(" %c -- To compute the area of a square.\n",
		SELECT_SQUARE);
	printf("Select> ");
	scanf("%c", &type);
	/* Compute the area of different shapes. */
	if (type == SELECT_CIRCLE) {
		/* Get information for CIRCLE radius needed to
		compute the area. */
		printf("Enter radius> ");
		scanf("%lf", &radius);
		area = PI * radius * radius;
		printf("The area of the circle is %.4f\n", area);
	}
	else {
		/* Get information for SQUARE edge needed to
		compute the area. */
		if (type == SELECT_SQUARE) {
			printf("Enter side> ");
			scanf("%d", &side_base);
			area = side_base * side_base;
			printf("The area of the square is %d\n", area);
		}
		else {
			printf("ERROR: Invalid selection.\n");
		}
	}
	return (0);
}