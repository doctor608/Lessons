#include <stdio.h>

#define ENG_ALPHABET 26
#define DIGITS 10

int main(void)
{
	for (int i = 0; i < DIGITS; ++i) {
		printf("%c  %d\n", '0' + i, '0' + i);
	}

	for (int i = 0; i < ENG_ALPHABET; ++i) {
		printf("%c  %d\n", 'A' + i, 'A' + i);
	}


	for (int i = 0; i < ENG_ALPHABET; ++i) {
		printf("%c  %d\n", 'a' + i, 'a' + i);
	}

	return 0;
}
