#include <stdio.h>

#define SIZE 100

int main(void)
{
	int numbers[SIZE];

	for (int i = 0; i < SIZE; ++i) {
		numbers[i] = i;
	}

	for (int i = 0; i < SIZE; ++i)
		printf("%d\n", numbers[i]);
}
