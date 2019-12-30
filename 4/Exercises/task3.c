/*
 *  Prompts user for 10 test results and displays number of passes and failures.
 */
#include <stdio.h>

#define NUM_STUDENTS 10

int main(void)
{
	int student, passes, failures;
	int  result;

	student = passes = failures = 0;

	while (student < NUM_STUDENTS) {
		printf("Enter result (1 = pass, 0 = fail): ");
		if (scanf("%d", &result) != 1) {
			fprintf(stderr, "Error: Invalid value\n");
			return 1;
		} else if (result != 0 && result != 1) {
			fprintf(stderr, "Error: Invalid result. (only 1 or 0)\n");
			return 1;
		} else {
			(result == 1) ? ++passes : ++failures;
		}
		++student;
	}

	printf("Passes: %d\n", passes);
	printf("Failures: %d\n", failures);

	if (passes >= NUM_STUDENTS / 100 * 80) {
		printf("Bonus to teacher\n");
	}

	return 0;
}
