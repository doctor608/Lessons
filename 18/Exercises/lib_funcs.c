#include <stdio.h>
#include <school.h>
#include <string.h>


#define WORD1 "banana"
#define WORD2 "apple"

int main(void)
{
        printf("Length of %s is %ld\n", WORD1, strlen(WORD1));
        printf("Length of %s is %ld\n", WORD2, strlen(WORD2));

        if (strcmp(WORD1, WORD2) == 0)
                printf("NICCCCE, same\n");
        else
                printf("No, not same\n");
        return 0;
}

