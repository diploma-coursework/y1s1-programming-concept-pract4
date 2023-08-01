#include <stdio.h>

void main() {
	int n1, n2, n3, n4, n5;

	printf("Enter 5 integers > ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	int total = n1 + n2 + n3 + n4 + n5;
	double average = total / 5;

	printf(
		"\n\n"
		"Total: %d\n"
		"Average: %.3f\n",
		total, average
	);
}