/* gcc -o numbers_relation numbers_relation.c
 * Shows the relation between to numbers.
 */
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Enter 2 integers: ");
	if (scanf("%d %d", &a, &b) != 2) {
		fprintf(stderr, "Error: Expected 2 integer values\n");
		return 1;
	}

	if (a > b)
		puts("a > b");
	else if (a < b)
		puts("a < b");
	else
		puts("a == b");

	return 0;
}
