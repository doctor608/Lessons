/* gcc -o area area.c
 *
 * Given a radius of the area, compute its diameter, perimeter and square.
 *
 */
#include <stdio.h>
#include <float.h>

#define PI 3.14159

int main(void)
{
	float radius;

	printf("Enter radius: ");
	if (scanf("%f", &radius) != 1) {
		fprintf(stderr, "Error: Expected a float value\n");
		return 1;
	}

	if (radius < 0) {
		fprintf(stderr, "Error: Radius can't be negative\n");
		return 1;
	}

	if (radius > FLT_MAX) {
		fprintf(stderr, "Error: Radius is too big to fit in a float\n");
		return 1;
	}

	printf("Diameter  is %.2f\n", radius * 2);
	printf("Perimeter is %.2f\n", 2 * PI * radius);
	printf("Square    is %.2f\n", PI * radius * radius);


	return 0;
}
