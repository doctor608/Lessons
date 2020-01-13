/* gcc -o msb -Wall -Werror -Wextra msb.c
 *
 * Checks if the Most Significant Bit is Set(==1).
 */
#include <stdio.h>

#define BITS sizeof(int) * 8 // Total bits required to represent an integer

int main(void)
{
	int num, msb;

	msb = 1 << (BITS - 1);
	// bits in msb == 10000000 00000000 00000000 00000000

	while (printf("enter number: ") && scanf("%d", &num) == 1) {
		if (num & msb)
			printf("MSB of %d is set (1).\n", num);
		else
			printf("MSB of %d is unset (0).\n", num);
	}

	return 0;
}
