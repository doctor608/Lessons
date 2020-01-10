/* gcc -o lsb -Wall -Werror -Wextra lsb.c
 *
 * Checks if the Least Significant Bit is Set (== 1).
 */
#include <stdio.h>

int main(void)
{
	int num;

	while (printf("Number: ") && scanf("%d", &num) == 1) {
		if (num & 0x1)
			printf("LSB of %d is set (1).\n", num);
		else
			printf("LSB of %d is unset (0).\n", num);
	}

	return 0;
}

