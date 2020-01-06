/*
 * Float arithmetic operations.
 */
#include <stdio.h>

int main(void)
{
 	double a, b;

	printf("Введите число a, b: ");

	if (scanf("%lf %lf", &a, &b) != 2) {
		puts("Error: 2 integer values are expected");
		return 1;
	}

	printf("a + b = %.50lf\n", a + b);
	printf("a - b = %.50lf\n", a - b);	
	printf("a / b = %.50lf\n", a / b);
	printf("a * b = %.50lf\n", a * b);
	// printf("a %% b = %lf\n", a % b);

	return 0;
}

