#include <stdio.h>

void main() {
	double centigrade;

	printf("Enter a temperature in centigrade > ");
	scanf("%lf", &centigrade);

	double fahrenheit = 32.0 + (centigrade * 180.0 / 100.0);

	printf("\nThe temperature in fahrenheit is %.3f\n", fahrenheit);
}