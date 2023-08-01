#include <stdio.h>

void main() {
	int num;
	printf("Enter a 4-digit integer > ");
	scanf("%d", &num);

	int last1 = num % 10;
	int last2 = num % 100;
	int last3 = num % 1000;

	printf("\n%d\n%d\n%d\n%d\n", last1, last2, last3, num);
}