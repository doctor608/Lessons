/*
 * 
 * Big comment over here 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main(void)
{
        int len;
        _Bool in_comment, in_quote;
        char line[MAX_LINE];
/* this is a comment */
        in_comment = in_quote = 0;

        int i;
        while (fgets(line, MAX_LINE, stdin) != NULL) {
                len = strlen(line);
                for (i = 0; i < len; ++i) {
                        if (line[i] == '"')
                                in_quote = 1;

                        if (in_quote)
                                putchar(line[i]);
                        else {
                                if (line[i] == '/' && line[i+1] == '*') {
                                        ++i;
                                        in_comment = 1;
                                }
                                if (line[i] == '*' && line[i+1] == '/') {
                                        ++i;
                                        in_comment = 0;
                                }
                                if (line[i] == '/' && line[i+1] == '/') {
                                        ++i;
                                        in_comment = 1;
                                }
                                if (!in_comment) {
                                        putchar(line[i]);
                                }
                        }
                }
        }

        return EXIT_SUCCESS;
}                    // gg sdasdadadada
