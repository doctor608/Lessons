#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <school.h>

int main(void)
{
        srand(time(NULL));
        for (int i = 0; i < 10; ++i) {
                printf("%d\n", rand() % 6);
        }
        return 0;
}
