/* gcc -o stars stars.c
 *
 * Prints stars
 *
 */
#include <stdio.h>

#define STARS 1000

int main(void)
{
	for (int i = 0; i < STARS; ++i) {
		if (i != 0 && i % 10 == 0)
			printf("\n");
		printf("* ");
	}
	puts("");

	return 0;
}
