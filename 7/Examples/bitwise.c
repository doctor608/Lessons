#include <stdio.h>

/*
 * Operators:
 * 	Arithmetic: + - / * %
 *	Relational: > < >= <= != ==
 *	Logic: 	    && - AND || - OR ! - NOR
 *	Bitwise:    & - AND | - OR ^ - XOR ~
 *
 */

int main()
{
	//int a = 10, b = 11;

	//int a = 2;
	
	// a 0000 0010
	//   1111 1101
	//   0000 0010
	//           1
	//   0000 0011

	// 0000 0001
	// 1000 0001
	//
	// 0000 0001
	// 1111 1110
	//         1
	// 1111 1111 - 1
	// 0000 0001 1
	// 0000 0000

	//printf("~%d = %d\n", a, ~a);

	// << >>
	int a = 15;
	
	// 0000 1111
	// 0011 1100
	
	printf("%d << 3 %d\n", a, a << 3);

	//printf("%d & %d = %d\n", a, b, a & b);
	//printf("%d | %d = %d\n", a, b, a | b);
	//printf("%d ^ %d = %d\n", a, b, a ^ b);
}
