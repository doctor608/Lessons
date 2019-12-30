#include <stdio.h>

int main(void)
{
	int a;

	a = 0;
	do {
		printf("%d\n", a);
		++a;
	}
	while (a < 10);
}
