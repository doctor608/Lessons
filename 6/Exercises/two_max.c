/* gcc -o two_max two_max.c
 *
 * Returns/Prints two max numbers entered.
 *
 */
#include <stdio.h>

int main(void)
{
	int number, success;
	int max1, max2;

	int in_loop = 0;

	printf("Enter number: ");
	success = scanf("%d", &max1);

	while (success == 1) {
		in_loop = 1;
		printf("Enter number: ");
		success = scanf("%d", &number);
		if (max1 < number) {
			max2 = max1;
			max1 = number;
		}
	}

	if (in_loop)
		printf("Max numbers: %d, %d\n", max1, max2);

	return 0;
}

