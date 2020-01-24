#include <stdio.h>

int main(void)
{
	int array[9] = {1, 2, 643, 21313, 321321, -312312, 32131231, 222, 221};

	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		sum += array[i];
	}
	printf("%d\n", sum);
	return 0;
}
