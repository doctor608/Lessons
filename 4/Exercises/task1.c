/*
 * Prompts user for 10 grades (integers) and prints it's average.
 */
#include <stdio.h>

#define NUM_GRADES 10

int main(void)
{
	int i, grade, total, average;
	
	i = 0;
	total = 0;

	while (i < NUM_GRADES) {
		printf("Enter grade: ");
		scanf("%d", &grade);
		total += grade;
		++i;
	}
	
	average = total / NUM_GRADES;
	printf("Average is %d\n", average);

	return 0;
}
