#include <time.h>
#include <stdio.h>
#include <school.h>
#include <stdlib.h>

int main(void)
{
        srand(time(NULL));

        int user_answer;
        int rand_num1 = rand() % 10, rand_num2 = rand() % 10;

        int correct = 0, incorrect = 0;

        while (printf("How much is %d times %d? ", rand_num1, rand_num2) &&
                scanf("%d", &user_answer) == 1) {
                int rand_phrase_num = rand() % 4;
                // rand_phrase_num = ///
                if (user_answer == rand_num1 * rand_num2) {
                        switch (rand_phrase_num) {
                        case 0:
                                printf("Correct!\n");
                                break;
                        case 1:
                                printf("You are a genius\n");
                                break;
                        case 2:
                                printf("You are not stupid\n");
                                break;
                        case 3:
                                printf("Good job\n");
                                break;
                        }
                        ++correct;
                }
                else {
                        switch (rand_phrase_num) {
                        case 0:
                                printf("You are not a genius!\n");
                                break;
                        case 1:
                                printf("Bad!\n");
                                break;
                        case 2:
                                printf("Batman! You are not right!\n");
                                break;
                        case 3:
                                printf("Idiot!\n");
                                break;
                        ++incorrect;
                        }
                }
                rand_num1 = rand() % 10, rand_num2 = rand() % 10;
        }

        if (correct > incorrect)
                printf("You have %d incorrect and %d correct answers. Good job!\n",
                        incorrect, correct);
        else
                printf("You have %d incorrect and %d correct answers. Poor job!\n",
                        incorrect, correct);
        return 0;
}
