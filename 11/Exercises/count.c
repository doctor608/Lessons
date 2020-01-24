#include <stdio.h>

int main(void)
{
	long tabs, spaces, newlines;

	tabs = 0;
	spaces = 0;
	newlines = 0;

	int c;

	while ((c = getchar()) != EOF) {
		switch (c) {
		case ' ':
			++spaces;
			break;
		case '\t':
			++tabs;
			break;
		case '\n':
			++newlines;
			break;	
		}
	}
	printf("spaces %li, tabs %li, new lines %li\n", spaces, tabs, newlines);
	return 0;
}

