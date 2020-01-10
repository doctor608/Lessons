/* gcc -o histogram histogram.c
 *
 * Prompts user for five integers and draw a histogram.
 *
 */
#include <stdio.h>

#define MAX_WIDTH 200

int main(void)
{
	int a, b, c, d, e;

	printf("Enter five numbers (0..100): ");
	if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 5) {
		fprintf(stderr, "Error: Expected five integer values\n");
		return 1;
	}

	if (a < 0 || a > MAX_WIDTH || b < 0 || b > MAX_WIDTH ||
	    c < 0 || c > MAX_WIDTH || d < 0 || d > MAX_WIDTH ||
	    e < 0 || e > MAX_WIDTH) {
		fprintf(stderr, "Error: Integers must be in range (0..%d)\n",
			MAX_WIDTH);
		return 1;
	}

	for (int i = 1, stars = 0; i <= 5; ++i) {
		switch (i) {
			case 1:
				stars = a;
				break;
			case 2:
				stars = b;
				break;
			case 3:
				stars = c;
				break;
			case 4: 
				stars = d;
				break;
			case 5:
				stars = e;
				break;
		}

		for (int j = 0; j < stars; ++j) {
			printf("*");
		}
		puts("");
	}
	return 0;
}

