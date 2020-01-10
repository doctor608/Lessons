/* gcc -o factorial factorial.c
 *
 * Calculates the factorial.
 *
 */
#include <stdio.h>

#define FACTORIAL_MAX 12
#define FAILURE 15
#define SUCCESS 0

int main(void)
{
	int a, fact_a;

	printf("Enter integer (0..12): ");
	if (scanf("%d", &a) != 1) {
		fprintf(stderr, "Error: Expected an integer value (0..12)\n");
		return FAILURE;
	}

	if (a < 0 || a > FACTORIAL_MAX) {
		fprintf(stderr, "Error: Only factorials from 0..12 are supported\n");
		return FAILURE;
	}

	if (a == 0) {
		printf("1\n");
	} else {
		fact_a = 1;
		for (int i = 1; i <= a; ++i) {
			fact_a *= i;
		}
		printf("%d\n", fact_a);
	}

	return SUCCESS;
}
