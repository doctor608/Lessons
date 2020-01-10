/* gcc -o grades grades.c
 *
 * Prompts user for grades (integers) until user enters -1,
 * and prints it's average.
 *
 */
#include <stdio.h>

int main(void)
{
	// Declaration
	int grade, total, num_grades;
	float average;

	// Initialization
	grade = 0;
	total = 0;
	average= 0;
	num_grades = 0;

	printf("Enter grade (-1 to end): ");
	if (scanf("%d", &grade) != 1) {
		fprintf(stderr, "Error: Invalid Grade\n");
		return 1;
	}

	while (grade != -1) {
		total += grade;
		++num_grades;

		printf("Enter grade (-1 to end): ");
		if (scanf("%d", &grade) != 1) {
			fprintf(stderr, "Error: Invalid Grade\n");
			return 1;
		}
	}

	if (num_grades == 0) {
		printf("No grades were entered\n");
	} else {
		average = (float) total / num_grades;
		printf("Average is %.1f\n", average);
	}

	return 0;
}
