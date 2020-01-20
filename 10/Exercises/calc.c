#include <stdio.h>

int main(void)
{
	char operation;
	double num1, num2;
	
	printf("Enter operation (+,-,/,*) and two numbers: ");

	if (scanf("%c %lf %lf", &operation, &num1, &num2) != 3) {
		fprintf(stderr, "Error: Invalid type of input\n");
		fprintf(stderr, "Fix: Enter char and 2 doubles\n");
		return 1;
	}

	switch (operation) {
	case '+':
		printf("%.2lf\n", num1 + num2);
		break;
	case '-':
		printf("%.2lf\n", num1 - num2);
		break;
	case '*':
		printf("%.2lf\n", num1 * num2);
		break;
	case '/':
		if (num2 == 0) {
			fprintf(stderr, "Error: Division by zero\n");
			return 1;
		} else {
			printf("%.2lf\n", num1 / num2);
		}
		break;
	}

	return 0;
}
