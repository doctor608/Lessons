#include <stdio.h>

#define SIZE 40

int main(void)
{
	int array[SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 9,
		            6, 3, 8, 6, 9, 3, 8, 2, 7, 6,
			    5, 7, 6, 8, 6, 7, 5, 6, 6, 5,
			    6, 7, 5, 6, 4, 8, 6, 8, 9, 1 };

	int frequency[10] = {0};
	// | | | | | | | | | | |
	// 0 1 2 3 4 5 6 7 8 9
	for (int i = 0; i < SIZE; ++i) {
		++frequency[array[i]]; 
	}

	for (int i = 1; i < 10; ++i) {
		printf("Digit %d has frequency %d\n", i, frequency[i]);
	}
}
