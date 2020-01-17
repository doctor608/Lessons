/*
 * INPUT:
 * 	Input a number: 22
 * OUTPUT: 
 * 	Lowest order set bit in 22 is 1
 */
#include <stdio.h>

#define INT_BITS sizeof(int) * 8

int main(void)
{
	int num, order = -1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (unsigned int i = 0; i < INT_BITS; ++i) {
		// 10001110 >>1
		if ((num >> i) & 1) {
			order = i;
			break;
		}
	}

	if (order != -1) 
		printf("Lowest order set bit in %d is %d.\n", num, order);
	else
		printf("0 has no set bits.\n");

	return 0;
}

