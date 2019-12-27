// Input 34512
// Ouput 3  4  5  1  2

#include <stdio.h>

int main(void)
{
	int a;
	printf("Enter five-digit number: ");
	
	if (scanf("%d", &a) != 1) {
		fprintf(stderr,"Expected an integer value\n");
		return 1;
	}

	printf("%d  ", a / 10000);  // 3
	a %= 10000;
	printf("%d  ", a / 1000);  // 34
	a %= 1000;
	printf("%d  ", a / 100);  // 345
	a %= 100;
	printf("%d  ", a / 10);	 // 3451
	a %= 10;	
	printf("%d  \n", a);

	return 0;
}
