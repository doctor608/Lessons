#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <school.h>

void draw_pyramid(int height)
{
        if (height == 0)
                return;

        draw_pyramid(height - 1);

        for (int i = 0; i < height; ++i)
                printf("*");
        puts("");
}


int main(void)
{
        draw_pyramid(3);

        return 0;
}
