#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <school.h>

int main(void)
{
        // Seed the random generator
        srand(time(NULL));

        int numbers[100];
        for (int i = 0; i < 100; ++i) {
                numbers[i] = rand() % 10;
        }

        print_array(numbers, 100);
        return 0;
}
