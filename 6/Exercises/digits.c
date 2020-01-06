/*
 * Output:
 * > 1   2   3   4   5   6   7   8   9   10
 */
#include <stdio.h>

int main(void)
{
	for (int number = 0; number < 11; ++number) {
		printf("%d   ", number);
	}

	puts("");

	return 0;
}
