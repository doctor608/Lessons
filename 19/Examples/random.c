#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <school.h>

int main(void)
{
        srand(time(NULL));

//        for (int i = 0; i < 10; ++i)
//                printf("%d\n", rand_int(20, 30));

        int array[20];

        randomize_array(array, 20, 1, 100);

        print_array(array, 20);
        return 0;
}
