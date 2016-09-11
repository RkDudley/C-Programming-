#include <stdio.h>
double find_departure_time(int a_time, double distance, double speed);
int
main(void)
{
	int a_time,	//arrival time
		d_time;	//departure time
	double distance,	//distance traveled
		avg_speed;	//average speed (km/hr)
					// Get arrival time
	printf("Enter arrival time\n 8:30 PM would be entered as 2030\n");
	printf("Arrival time> ");
	scanf("%d", &a_time);
	//get the distance and average speed
	printf("Enter the distance in km\n> ");
	scanf("%lf", &distance);
	printf("Enter anticipated average speed (including stops) in km/hr\n> ");
	scanf("%lf", &avg_speed);
	/* Compute the departure time. */
	d_time = find_departure_time(a_time, distance, avg_speed);
	printf("You should leave at %d.\n", d_time);
	return (0);
}
double find_departure_time(int a_time, double distance, double speed)
{
	double time;	//travel time in hours
	int t_min,	//travel time in minutes /rounded
		a_min,	//total minutes to arrival time
		dt_min,	//departure time in minutes
		d_hr,	//hour of departure /24-hr clock
		d_min,	//minutes of departure time
		d_time;	//departure time /24-hr clock
	time = distance / speed;
	t_min = int(time * 60 + 0.5);
	a_min = a_time / 100 * 60 + a_time % 100;
	dt_min = a_min - t_min;
	d_hr = dt_min / 60;
	d_min = dt_min % 60;
	d_time = d_hr * 100 + d_min;
	return(d_time);
}