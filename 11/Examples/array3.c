#include <stdio.h>

int main(void)
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 8};
	for (int i = 0; i < 10; ++i) {
		printf("Element in position %d is %d\n", i, array[i]);
	}
}
