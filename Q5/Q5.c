#include <stdio.h>

struct Product {
	const char name[10];
	const double price;
	int boughtQuantity;
};

void main() {
	struct Product keyboard = { "Keyboard", 35.50 };
	struct Product mouse = { "Mouse", 12.90 };
	struct Product monitor = { "Monitor", 600.00 };
	struct Product printer = { "Printer", 168.00 };
	struct Product speaker = { "Speaker", 120.00 };

	struct Product products[] = { keyboard, mouse, monitor, printer, speaker };
	const double TAX_RATE = 8.25;
	double totalPrice = 0;

	printf("Enter number of items sold:\n\n");

	for (int i = 0; i < 5; i++) {
		printf("%8s > ", products[i].name);

		scanf("%d", &products[i].boughtQuantity);
		totalPrice += (double) products[i].boughtQuantity * products[i].price;
	}

	printf(
		"\n"
		"QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n"
		"---\t-----------\t----------\t-----------\n"
	);

	for (int i = 0; i < 5; i++) {
		printf(
			"%3d\t%-11s\t%10.2f\t%11.2f\n",
			products[i].boughtQuantity,
			products[i].name,
			products[i].price,
			(double) products[i].boughtQuantity * products[i].price
		);
	}

	printf (
		"   \t           \t          \t-----------\n"
		"   \t           \tSUBTOTAL  \t%11.2f\n"
		"   \t           \tTAX (%.2f\%) \t%11.2f\n"
		"   \t           \tTOTAL     \t%11.2f\n",
		totalPrice,
		TAX_RATE,
		totalPrice * TAX_RATE / 100,
		totalPrice + totalPrice * TAX_RATE / 100
	);



	printf("%f", totalPrice);
}
