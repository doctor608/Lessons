/*
 *  Prints the following table to the console:
 *
 *  N	10*N     100*N    1000*N
 *  1    10       100      1000
 *  2   ...
 *  3
 *  4
 *  5
 *  6
 *  7
 *  8
 *  9
 *  10
 */  
#include <stdio.h>

int main(void)
{
	printf("N\t10*N\t100*N\t1000*N\n\n");

	for (int i = 1; i < 11; ++i) {
		printf("%d\t%d\t%d\t%d\n", i, 10 * i, 100 * i, 1000 * i);
	}

	return 0;
}
