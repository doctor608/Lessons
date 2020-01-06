/*
 * printf Training
 */
#include <stdio.h>

int main(void)
{
	printf("1, 2, 3, 4\n");
	
	printf("%d, %d, %d, %d\n", 1, 2, 3, 4);

	printf("1, ");
	printf("2, ");
	printf("%d, ", 3);
	printf("%d\n", 4);

	return 0;
}

