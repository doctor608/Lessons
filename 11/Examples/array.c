#include <stdio.h>

int main(void)
{
	int array[10];
	// |0|1| | | | | | | | |
	for (int i = 0; i < 10; ++i) {
		printf("%d\n", array[i]);
	}

	puts("---------------------");
	for (int i = 0; i < 10; ++i) {
		array[i] = 0;
	}

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", array[i]);
	}
}
