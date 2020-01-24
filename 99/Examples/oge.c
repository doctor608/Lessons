/*
 *16
 *24
 *56     72
 *26
 *12
 */
#include <stdio.h>

#define MAXNUM 100

int main(void)
{
	int num;

	num = 1;

	for (int i = 0; ++i; num != 0) {
	printf("Enter an integer (0..300): ");
	if (scanf("%d", &num) != 1) {
		fprintf(stderr, "Error: Enter number (0..300)");
		return 1;
	}
}

printf("%d", num);




	return 0;
}
