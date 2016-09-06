#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(){

	double number,result;

	printf("Assigment #1-3, Taylor Ewertz, t_ewertz@yahoo.com\n");

	printf("Please input an integer:  \n");
	scanf("%lf", &number);
	number = (PI / 180)* number;
	result = cosh(number);
	printf("%.3f", result);

	return 0;
}
