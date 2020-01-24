#include <stdio.h>

int main(void)
{
	long count;

	count = 0;
	while (getchar() != EOF)
		++count;
	printf("%li\n", count);	

	return 0;
}
