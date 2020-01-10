/* gcc -o float float.c
 *
 * Float arithmetic operations.
 */
#include <stdio.h>

int main(void)
{
 	double a, b;

	printf("Enter two floats: ");

	if (scanf("%lf %lf", &a, &b) != 2) {
		fprintf(stderr, "Error: 2 integer values are expected\n");
		return 1;
	}

	printf("a + b = %.50lf\n", a + b);
	printf("a - b = %.50lf\n", a - b);
	printf("a / b = %.50lf\n", a / b);
	printf("a * b = %.50lf\n", a * b);

	return 0;
}

