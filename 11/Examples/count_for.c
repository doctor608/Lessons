#include <stdio.h>

int main(void)
{
	long count;

	for (count = 0; getchar() != EOF; ++count)
		;
	printf("%li\n", count);
	return 0;
}
