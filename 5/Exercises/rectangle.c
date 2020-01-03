/*
 * Height: 5
 * Width:  10
 * Output: 
 *
 *    * * * * * * * * * *
 *    * * * * * * * * * *
 *    * * * * * * * * * *
 *    * * * * * * * * * *
 *    * * * * * * * * * *
 */
#include <stdio.h>

#define ERROR_MESSAGE "Expected an integer value\n"

int main(void)
{
	int height, width;
	
	printf("Enter height: ");
	if (scanf("%d", &height) != 1) {
		fprintf(stderr, ERROR_MESSAGE);
		return 1;
	}
	printf("Enter width: ");
	if (scanf("%d", &width) != 1) {
		fprintf(stderr, ERROR_MESSAGE);
		return 1;
	}

	if (width < 2 || width > 30 || height < 2 || height > 30) {
		fprintf(stderr, "Width and height must be in range 2..30\n");
		return 1;
	}

	for (int row = 0; row < height; ++row) {
		// Draws one row
		for (int star = 0; star < width; ++star) {
			printf("* ");
		}
		puts("");
	}
	return 0;
}
