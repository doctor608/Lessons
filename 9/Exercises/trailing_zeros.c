/*
 * INPUT:
 * 	Input any number: 128
 * OUTPUT:
 * 	Total number of trailing zeros in 128 is 7.
 */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int main(void)
{
	int num, count;

	printf("Enter number: ");
	scanf("%d", &num);

	count = 0;
	// 10000000
	// i = 0 10000000
	// i = 1 01000000
	// i = 2 00100000
	// i = 3 00010000
	// i = 4 00001000
	// i = 5 00000100
	// i = 6 00000010
	// i = 7 00000001
	//       00000001
	for (unsigned int i = 0; i < INT_SIZE; ++i) {
		if ((num >> i) & 1)
			break;
		++count;
	}

	printf("Total number of trailing zeros in %d is %d.\n", num, count);
	return 0;
}

