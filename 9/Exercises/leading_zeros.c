/*
 * INPUT:
 * 	Input any number: 22
 * OUTPUT:
 * 	Total number of leading zeros in 22 is 27 (4 byte signed integer).
 */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int main(void)
{
	int num, msb, count;

	printf("Enter number: ");
	scanf("%d", &num);

	msb = 1 << (INT_SIZE - 1);

	count = 0;
	
	for (unsigned int i = 0; i < INT_SIZE; ++i) {

		// 00000000 00000000 00000000 00010110
		// 10000000 00000000 00000000 00000000
		if ((num << i) & msb)
			break;
		++count;
	}

	printf("Total number of leading zeros in %d is %d (4 byte signed integer) \n",
		num, count);
	return 0;
}

