#include <stdio.h>
#include <school.h>

int main(void)
{
        int array[100] = {0};

        print_array(array, 100);

        float f_array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

        print_array(f_array, 5);
        return 0;
}
