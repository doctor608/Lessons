#include <stdio.h>

#define SIZE 100

int main(void)
{
	int numbers[SIZE];
	int i;

	for (i = 0; i < SIZE; ++i)
		numbers[i] = 2 + 2 * i;

	for (i = 0; i < SIZE; ++i)
		printf("%d\n", numbers[i]);

	return 0;
}

