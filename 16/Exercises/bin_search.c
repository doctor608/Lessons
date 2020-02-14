#include <stdio.h>
#include <school.h>

#define SIZE 10000

int main(void)
{
        int array[SIZE];

        for (int i = 1; i <= SIZE; ++i) {
                array[i] = i;
        }

        int num;
        printf("Enter number (1 - %d): ", SIZE);
        scanf("%d", &num);

        int low = 0;
        int high = SIZE;
        int mid;

        int iterations = 0;

        while (low < high) {
                ++iterations;

                mid = (low + high) / 2;

                if (num < array[mid])
                        high = mid - 1;
                else if (num > array[mid])
                        low = mid + 1;
                else {
                        printf("Found!\n");
                        break;
                }
        }

        printf("Took %d iterations\n", iterations);

        return 0;
}
