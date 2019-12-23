#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Введите числа a, b: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Error: введите числа\n");
		return 1;
	}

	if (a > b)
		puts("a > b");
	else if (a < b)
		puts("a < b");
	else 
		puts("a == b");
	return 0;


}
