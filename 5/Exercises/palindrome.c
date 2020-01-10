/* gcc -o palindrome palindrome.c
 *
 * Prints if a number is a palindrome or not.
 *
 */
#include <stdio.h>

#define ERROR_MESSAGE "Error: Expected a five-digit number\n"

int main(void)
{
	int n, temp, reverse;

	printf("Enter an five-digit number: ");
	if (scanf("%10d", &n)  != 1) {
		fprintf(stderr, ERROR_MESSAGE);
		return 1;
	}

	temp = n;
	reverse = 0;

	while (temp != 0) {
		reverse *= 10;
		reverse += temp % 10;
		temp /= 10;
	}

	if (n == reverse) {
		printf("%d is a palindrome\n", n);
	} else {
		printf("%d is not a palindrome\n", n);
	}

	return 0;
}
