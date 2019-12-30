#include <stdio.h>

int main(void)
{
	int a;
	
	printf("Введите число a: ");
	if (scanf("%d", &a) != 1) {
		puts("Error: Expected an integer value");
		return 1;
	}
	
	if (a % 2 == 1)
		printf("%d is odd\n", a);
	else
		printf("%d is even\n", a);	

	return 0;

