#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
        /* for (int i = 1; i < argc; ++i) { */
        /*         for (int j = 0; argv[i][j] != '\0'; ++j) */
        /*                 putchar(argv[i][j]); */
        /*         putchar('\n'); */
        /* } */

        for (int i = 1; i < argc; ++i) {
                for (; *argv[i] != '\0'; ++argv[i])
                        putchar(*argv[i]);
                putchar('\n');
        }

        return 0;
}
