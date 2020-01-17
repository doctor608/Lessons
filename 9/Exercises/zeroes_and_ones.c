/*
 *
 *
 *
 *
 */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int main(void)
{
	int zeroes, ones, num;

	printf("Enter an integer value: ");
	scanf("%d", &num);

	zeroes = 0;
	ones = 0;

	for (unsigned int i = 0; i < INT_SIZE; ++i) {
		if (num & 1)
			++ones;
		else
			++zeroes;
		num >>= 1;
	}

	printf("Total zero bit is %d\n", zeroes);
	printf("Total one bit is %d\n", ones);

	return 0;
}

