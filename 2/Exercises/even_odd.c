/* gcc -o even_odd even_odd.c
 *
 * Prints if number is even or odd.
 *
 */
#include <stdio.h>

int main(void)
{
	int a;
	
	printf("Enter number: ");
	if (scanf("%d", &a) != 1) {
		fprintf(stderr, "Error: Expected an integer value\n");
		return 1;
	}
	
	if (a % 2 == 1)
		printf("%d is odd\n", a);
	else
		printf("%d is even\n", a);

	return 0;
}
