#include <stdio.h>

int main(void)
{
	float f = 128.66;
	printf("%d\n", *(int*) &f);
}
