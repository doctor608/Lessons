/* gcc -o romb romb.c
 * 2 - 30
 *
 * 5:
 *
 *     *
 *    * *
 *   *   *
 *  *     *
 *
 * 1. 4 spaces 1 star 1 spaces 1 star
 * 2. 3 spaces 1 star 3 spaces 1 star
 * 3. 2 spaces 1 star 5 spaces 1 star
 *
 * *       *
 *  *     *
 *   *   *
 *    * *
 *     *
 *
 *
 */

#include <stdio.h>

#define MIN_SIDE 2
#define MAX_SIDE 30

int main(void)
{
	int side;

	printf("Enter side (%d..%d): ", MIN_SIDE, MAX_SIDE);
	if (scanf("%d", &side) != 1) {
		fprintf(stderr, "Error: Expected an integer value in range (%d..%d)\n",
			MIN_SIDE, MAX_SIDE);
		return 1;
	}
	
	if (side < MIN_SIDE || side > MAX_SIDE) {
		fprintf(stderr, "Error: Side must be in range (%d..%d)\n",
			MIN_SIDE, MAX_SIDE);
		return 1;
	}

	// Print the top
	for (int space = 0; space < side - 1; ++space)
		printf(" ");
	printf("*\n");

	// Print the upper body
	for (int row = 1; row < side - 1; ++row) {
		for (int space = 0; space < side - row - 1; ++space) {
			printf(" ");
		}
		printf("*");

		for (int space = 0; space < row + row - 1; ++space) {
			printf(" ");
		}
		printf("*");
		puts("");
	}

	// print the middle
	printf("*");
	for (int space = 0; space < side + side - 3; ++space) {
		printf(" ");
	}
	printf("*\n");

	// print the lower body
	// TODO Doesnt work
	/*
	for (int row = 1; row < side - 1; ++row) {
		for (int space = 0; space < row; ++space) {
			printf(" ");
		}
		printf("*");

		for (int space = 0; space < side + side - row - row - row -row -row; ++space) {
			printf(" ");
		}
		printf("*\n");
	}
	*/
	// side + row + 1
	// side + row - 1
	//
	// side - 2

	// print the bottom
	for (int space = 0; space < side - 1; ++space)
		printf(" ");
	printf("*\n");

	return 0;
}

// side = 5

// row 1 - 5
// row 2 - 3
// row 3 - 1

