/*
 * Calucaltes min, max and mean of three numbers.
 */
#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("Enter 3 numbers: ");

	if (scanf("%d %d %d", &a, &b, &c) != 3) {
		// All bad
		fprintf(stderr, "Error: expected 3 integer values\n");
		return 1;
	}

	printf("Min is: ");
	if (a <= b && a <= c)
		printf("%d\n", a);
	else if  (b <= a && b <= c)
		printf("%d\n", b);
	else
		printf("%d\n", c);

	
	printf("Max is: ");
	if (a >= b && a >= c)
		printf("%d\n", a);
	else if  (b >= a && b >= c)
		printf("%d\n", b);
	else
		printf("%d\n", c);

	printf("Sum is: %d\n", a + b + c);
	printf("Mean is: %d\n", (a + b + c) / 3);

	return 0;
}
