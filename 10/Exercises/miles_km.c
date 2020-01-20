/*
 * Converts miles to kilometers and vice versa.
 */
#include <stdio.h>

#define KM_PER_MILE 1.609

int main(void)
{
	char unit;
	double distance;

	printf("Enter distance and unit of measure (k or m): ");
	if (scanf("%lf %c", &distance, &unit) != 2) {
		fprintf(stderr, "Error: Invalid type of input\n");
		fprintf(stderr, "Fix: Enter a double and a char\n");
		return 1;
	}

	switch (unit) {
	case 'k':
		printf("%.2lf(k) == %.2lf(m)\n", distance,
			distance / KM_PER_MILE);
		break;
	case 'm':
		printf("%.2lf(m) == %.2lf(k)\n", distance,
			distance * KM_PER_MILE);
		break;
	default:
		printf("Sorry, I do not know what '%c' is\n", unit);
		break;
	}

	return 0;
}
