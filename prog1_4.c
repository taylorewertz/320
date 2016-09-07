#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){

	printf("Assignment #1-4, Taylor Ewertz, t_ewertz@yahoo.com\n");
	
	double x = atoi(argv[1]);
	double y = atoi(argv[2]);

	for(double i = 0; i < x; i++){
		printf("%.2f ", y*i);
	}
	printf("\n");
	for(double i = 0; i < x; i++){
		printf("%.2f ", cos(y*i));
	}
	printf("\n");
	return 0;
}
