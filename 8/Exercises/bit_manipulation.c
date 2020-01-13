/* gcc -o bit_manipulation -Wall -Werror -Wextra bit_manipulation.c
 *
 * Does 3 types of bit manipulation:
 *
 *  0. Get nth bit.
 *  1. Set nth bit.
 *  2. Clear nth bit.
 *
 */

#include <stdio.h>

#define INT_BITS (int) sizeof(int) * 8

int main(void)
{
	puts("Options:");
	puts("0. Get nth bit.");
	puts("1. Set nth bit.");
	puts("2. Clear nth bit.");
	puts("");

	int option;
	printf("Option: ");
	if (scanf("%d", &option) != 1) {
		fprintf(stderr, "Error: Option must be an integer.\n");
		fprintf(stderr, "Fix: Try 0, 1 or 2\n");
		return 1;
	}
	
	switch (option) {
	case 0: {
		int num, bit_pos, bit_status;

		printf("Input number: ");
		scanf("%d", &num);
		printf("Input bit position: ");
		scanf("%d", &bit_pos);

		if (bit_pos < 0 || bit_pos > INT_BITS - 1) {
			fprintf(stderr, "Error: %d is an invalid bit position\n",
			bit_pos);
			fprintf(stderr, "Fix: Try from range 0..%d\n",
			INT_BITS);
		} else {
			bit_status = (num >> bit_pos) & 01;
			printf("The %d is set to %d\n", bit_pos, bit_status);
		}
	}
		break;
	case 1: {
		int num, bit_pos, new_num;
	
		printf("Input number: ");
		scanf("%d", &num);
		printf("Input bit position: ");
		scanf("%d", &bit_pos);

		if (bit_pos < 0 || bit_pos > INT_BITS - 1) {
			fprintf(stderr, "Error: %d is an invalid bit position\n",
			bit_pos);
		fprintf(stderr, "Fix: Try from range 0..%d\n",
			INT_BITS);
		} else {
			new_num = (1 << bit_pos) | num;
			printf("Number %d after setting the %d bit: %d\n", num,
				bit_pos, new_num);
		}
	}
		break;
	case 2: {
		int num, bit_pos, new_num;
	
		printf("Input number: ");
		scanf("%d", &num);
		printf("Input bit position: ");
		scanf("%d", &bit_pos);

		if (bit_pos < 0 || bit_pos > INT_BITS - 1) {
			fprintf(stderr, "Error: %d is an invalid bit position\n",
			bit_pos);
			fprintf(stderr, "Fix: Try from range 0..%d\n",
			INT_BITS);
		} else {
			new_num = (~(1 << bit_pos)) & num;
			printf("Number %d after clearing the %d bit: %d\n", num,
				bit_pos, new_num);
		}
	}
		break;
	default: {
		fprintf(stderr, "Error: Option must be 0, 1 or 2\n");
		return 1;
	}
	}

	return 0;
}

