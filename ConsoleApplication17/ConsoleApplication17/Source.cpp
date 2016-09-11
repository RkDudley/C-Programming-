#include <stdio.h>
#include <math.h>


double accelation(double final_v, double initial_v, double t);
double timerate(double final_v, double initial_v, double accl);
void instruct(void);


int main(void)
{
	double initial_velocity = 10,
		final_velocity = 2.5,
		time = 1.0,
		timetostop,
		constant;

	//instruction to user
	instruct();
	

	// calculate constant rate of acceleration
	constant = accelation(initial_velocity,final_velocity,time);

	//display the cyclist 's constant rate of acceleration  
	printf("the cyclist 's constant rate of acceleration %.2f mile/hour\n", constant);

	//calculate time to rest
	timetostop = timerate(initial_velocity, final_velocity, accelation(initial_velocity, final_velocity, time));
	
	//display time the cyclist will take
	printf("the cyclist will take  %.2f minutes to rest\n",timetostop);

	getchar();
	return (0);
}
double accelation(double final_ve, double initial_ve, double t){

	double a;
	a = (final_ve - initial_ve) / t;
	return(a);

}
double timerate(double final_v, double initial_v, double accl){

	double b;
	final_v = 0.0;
		b= (final_v - initial_v )/ accl;
	return(b);
}
void instruct(void)
{

    printf("*The cyclist coasting on a travel road shows from a speed of\n ");
	printf("*10mi/hr to 2.5 mi/hr in one minute\n");
	printf("*This program compute the cyclist’s constant rate of acceleration\n");
	printf("*Determines how long the cyclist will take to come to rest\n");
	printf("****************************************************************\n");
	


}