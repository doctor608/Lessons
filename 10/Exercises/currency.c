#include <stdio.h>

#define EURO   68.27
#define POUND  80.05
#define DOLLAR 61.60

int main(void)
{
	char currency;
	double value;

	printf("Enter value and currency (d - dollars, e - euros, p - pounds): ");
	if (scanf("%lf %c", &value, &currency) != 2) {
		fprintf(stderr, "Error: Invalid type of Input\n");
		fprintf(stderr, "Fix: Enter a double and a char\n");
		return 1;
	}

	if (value < 0) {
		fprintf(stderr, "Error: value cannot be nagative\n");
		fprintf(stderr, "Fix: Try enter a positive double value\n");
		return 1;
	}

	switch (currency) {
	case 'e':
		printf("%.2lf(e) == %.2lf(r)\n", value, value * EURO);
		break;
	case 'd':
		printf("%.2lf(d) == %.2lf(r)\n", value, value * DOLLAR);
		break;
	case 'p':
		printf("%.2lf(p) == %.2lf(r)\n", value, value * POUND);
		break;
	default:
		printf("Sorry, I do not know this currency '%c'\n", currency);
		break;
	}

	return 0;
}

