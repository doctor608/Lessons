/*
 * Prompts user for numbers, at the end prints the maximum number received.
 */
#include <stdio.h>

int main(void)
{
	int num, max_num;

	printf("Enter number: ");
	if (scanf("%d", &max_num) != 1) {
		puts("");
		return 1;
	}

	printf("Enter number: ");
	while (scanf("%d", &num) == 1) {
		if (max_num <= num) {
			max_num = num;
		}
		printf("Enter number: ");
	}

	puts("");
	printf("Max number is %d\n", max_num);

	return 0;
}
