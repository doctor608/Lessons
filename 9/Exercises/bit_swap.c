/*
  *
  * Swapping 2 integer values using bitwise operators.
  *
  */

#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1, &num2);
	
	printf("Original value of num1 is %d, num2 is %d\n", num1, num2);

	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;

	printf("After swapping num1 is %d, num2 is %d\n", num1, num2);
	
}
