#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <school.h>

int flip_coin();

int main(void)
{
        srand(time(NULL));

        int side, heads = 0, tails = 0;

        for (int i = 0; i < 100; ++i) {
                side = flip_coin(); // 1 - if tails, 0 - if heads
                if (side) {
                        printf("Tails\n");
                        ++tails;
                }
                else {
                        printf("Heads\n");
                        ++heads;
                }
        }

        printf("Tails - %d, Heads - %d\n", tails, heads);

        return 0;
}


/*
 * Simulates flipping of a coin, returns a random integer between 0 and 1.
 * 0 - heads
 * 1 - tails
 */
int flip_coin()
{
        return rand() % 2;
}
