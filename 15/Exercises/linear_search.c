#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <school.h>

int main(void)
{
        srand(time(NULL));

        int numbers[100];
        for (int i = 0; i < 100; ++i) {
                numbers[i] = rand() % 101;
        }

        int num;
        printf("Enter a number to search for (0-100): ");
        scanf("%d", &num);

        int found = 0;

        for (int i = 0; i < 100; ++i) {
                if (numbers[i] == num) {
                        found = 1;
                        printf("%d is found\n", num);
                        break;
                }
        }

        if (!found)
                printf("%d not found\n", num);

        return 0;
}
