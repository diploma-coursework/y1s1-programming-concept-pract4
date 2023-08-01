#include <stdio.h>

void main() {
	double num;

	printf("Enter a floating-point number > ");
	scanf("%lf", &num);

	double integral = (int) num;
	double fractional = integral - num;

	printf(
		"\n"
		"Its integral part    : %.0f\n"
		"Its fractional part  : %f",
		integral, fractional
	);
}