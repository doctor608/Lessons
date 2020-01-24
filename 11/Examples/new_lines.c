#include <stdio.h>

int main(void)
{
	long new_lines;
	int c;

	new_lines = 0;

	while ((c = getchar()) != EOF) 
		if (c == '\n')
			++new_lines;

	printf("%li\n", new_lines);
	return 0;
}
