#include <stdio.h>

#define IN  1  // inside word
#define OUT 0  // outside word

int main(void)
{
	long lines, words, chars;
	int c, state;

	state = OUT;
	words = lines = chars = 0;

	while ((c = getchar()) != EOF) {
		++chars;
		if (c == '\n')
			++lines;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++words;
		}
	}
	printf("lines %li words %li chars %li\n", lines, words, chars);
	return 0;
}
