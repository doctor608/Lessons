#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		printf("%d\n", c != EOF);
		putchar(c);
	}

	return 0;
}
