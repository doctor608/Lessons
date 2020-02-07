#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <school.h>

#define MAX_RANGE 10000

int main(void)
{
        // Calculate the number of attempts for binary search
        int attempts = 0;
        for (; pow(2, attempts) < MAX_RANGE; ++attempts);

        srand(time(NULL));

        int rand_num = rand() % MAX_RANGE + 1;
        printf("I have generated a number between 0 and %d\n", MAX_RANGE);
        printf("You have %d attempts\n", attempts);
        int user_guess;

        while (1) {
                printf("Make a guess (%d attempts left): ", attempts);
                scanf("%d", &user_guess);

                if (user_guess == rand_num) {
                        printf("YOU WOOOOOOON!!!\n");
                        break;
                }
                else if (user_guess < rand_num)
                        printf("Too low!\n");
                else
                        printf("Too high!\n");

                --attempts;
                if (attempts == 0)
                        printf("No more attemps. You lost! The number was %d\n",
                                rand_num);

        }
        return 0;
}
