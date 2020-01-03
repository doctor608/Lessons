/*
 * Converts binary numbers to decimal numbers.
 */
#include <stdio.h>

int main(void)
{
	int bin_num, dec_num, bin_temp, remainder;

	printf("Enter a binary number (10 digit max): ");
	// Check if an integer
	if (scanf("%10d", &bin_num) != 1) {
		fprintf(stderr, "Error: Expected an integer value\n");
		return 1;
	}
	
	// Check if can be interpreted as a binary integer
	bin_temp = bin_num;
	
	while (bin_temp != 0) {
		remainder = bin_temp % 10;
		if (remainder != 0 && remainder != 1) {
			fprintf(stderr, "Error: %d is not a binary number\n", bin_num);
			return 1;
		}
		bin_temp /= 10;
	}

	dec_num = 0;

	// Convert to decimal
	for (int power = 0, two_power = 1; bin_num != 0; ++power, bin_num /= 10) {
		for (int i = 0; i < power; ++i) {
			two_power *= 2;
		}
		dec_num += bin_num % 10 * two_power;
		two_power = 1;
	}
	
	printf("%d\n", dec_num);

	return 0;
}
