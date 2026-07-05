#include <stdio.h>
#include <math.h>

double CelToFah (double Celsius) {
	double result = (Celsius*1.9)+32.0;
	return result;
}
int main ()
{	printf ("25.0 degrees Celsius is equal to %.2f degrees fahrenheit", CelToFah (25.0));
	return 0;
}