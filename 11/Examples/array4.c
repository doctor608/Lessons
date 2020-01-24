/* 
 *  Element         Value	Histogram
 *       0	       19         *****************
 */
#include <stdio.h>

#define SIZE 10

int main(void)
{
	int array[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

	printf("Element\tValue\tHistogram\n");
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\t%d\t", i, array[i]);
		for (int j = 0; j < array[i]; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
	
	return 0;
}

