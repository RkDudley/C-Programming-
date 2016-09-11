/*
*Computer the weight of a batch of flat washer.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double find_area(double r);
double find_rim_area(double iner, double outer);
double find_unit_weight(double thickness, double density, double area);
void instruct(void);

int
main(void)
{
	double hole_diameter;
	double edge_diameter;
	double thickness;
	double density;
	double quantity;
	double weight;
	double hole_radius;
	double edge_radius;
	double rim_area;
	double unit_weight;

	/* give the user instruction*/
	instruct();

	/*get the inner diameter, outer diameter, and thickness.*/
	printf("Inner diameter in centimeter>");
	scanf("%lf1",&hole_diameter);
	printf("outer diameter in centimeters>");
	scanf("%lf", &edge_diameter);
	printf("Thickness in centimeters>");
	scanf("%lf", &thickness);

		/*get the material density and quantity manufactured*/

		printf("Material density in gram per cubic centimeter>");
	scanf("%lf", &density);
	printf("Quantity in batch>");
	scanf("%lf", &quantity);
	/*compute the rim area*/
	hole_radius = hole_diameter;
	edge_radius = edge_diameter;

		rim_area = PI* edge_radius*edge_radius -
		PI* hole_radius*hole_radius;

	/* Compute the weight of a flat washer*/
	unit_weight = rim_area*thickness*density;
	/*compute the weight of the batch of washer.*/
	weight = unit_weight*quantity;

	/*Display the weight of the batch of washers.*/
	printf("\nThe expected weight of the batch is %.2f", weight);
	printf("grams.\n");

	return(0);

}
/*
* Displays instructions to a user of program to compute the
* weight of a batch of flat washers.
*/
void
instruct(void)
{
	printf("This program computes the weight of a batch of flat \n");
	printf("washers\n");
		printf("To use this program, please enter the inner diameter,\n");
	printf("outer diameter, thickness, density, and quantity at each\n");
	printf("respective prompt.\n\nThanks for using this program.\n\n");
}
/*
* Computes the area of a circle with radius r.
* Pre: r is defined and is > 0.
* PI is a constant macro representing an approximation of pi.
* Library math.h is included.
*/
double
find_area(double r)
{
	return (PI * pow(r, 2));
}
/*
* Computes the area of an annular ring with inner radius of inner
* and outer radius of outer.
* Pre: inner and outer are defined and are > 0.
* Function find_area() is defined.
*/
double
find_rim_area(double outer, double inner)
{
	return (find_area(outer) - find_area(inner));
}
/*
* Computes the unit weight of a flat object with an area of area,
* with a thickness of thickness, and with a density of density.
* Pre: area, thickness and density are defined and are > 0.
*/
double
find_unit_weight(double area, double thickness, double density)
{
	return (area * thickness * density);
}
