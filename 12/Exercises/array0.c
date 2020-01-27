#include <stdio.h>

int main(void)
{
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        int array[size];
        int i;

        for (i = 0; i < size; ++i) {
                printf("Enter element - %d: ", i);
                scanf("%d", array + i);
        }

        // ORIGINAL PRINT
        printf("Original\n");
        printf("[");
        for (i = 0; i < size; ++i)
                printf("%d, ", array[i]);
        printf("\b\b]\n");

        // REVERSE PRINT
        printf("Reverse\n");
        printf("[");
        for (i = size - 1; i >= 0; --i)
                printf("%d, ", array[i]);
        printf("\b\b]\n");

        // SUM. MIN, MAX, MEAN
        int sum, min, max;
        double mean;

        sum = mean = 0;
        min = max = array[0];

        for (i = 1; i < size; ++i) {
                if (array[i] < min)
                        min = array[i];
                if (array[i] > max)
                        max = array[i];
                sum += array[i];
        }

        mean = (double) sum / size;
        printf("sum %d, min %d, max %d, mean %.2lf\n", sum, min, max, mean);

        // UNIQUE
        int unique;
        int unique_count = 0;
        int duplicate_count = 0;

        // [ 4, 14, 3, 4, 15, 3 ]
        for (i = 0; i < size; ++i) {
                unique = 1;

                // look left for duplciates
                for (int j = 0; j < i; ++j) {
                        if (array[i] == array[j]) {
                                unique = 0;
                                break;
                        }
                }

                if (unique)
                        ++unique_count;
                else
                        ++duplicate_count;
        }

        printf("unique %d, duplicate %d\n", unique_count, duplicate_count);
        return 0;
}

