#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter option (1..3): ");
	scanf("%d", &x);

	switch (x) {
		case 1:
			printf("option 1\n");
			break;
		case 2:
			printf("option 2\n");
			break;
		case 3:
			printf("option 3\n");
			break;
		default:
			printf("invalid option\n");
			break;
	}

	return 0;
}
