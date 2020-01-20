
// 0 0
// 1 1
// 2 4
// 3 9
// ...
// 99 9801
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 100; ++i) {
		printf("%d  %d\n", i, i * i);
	}

	return 0;
}
