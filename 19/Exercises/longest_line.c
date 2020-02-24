#include <stdio.h>
#include <school.h>
#include <string.h>

#define MAXLINE 1024
int main(void)
{
        int len;  // length of the current string
        int max;  // length of the longest string
        char line[MAXLINE];  // current string
        char longest[MAXLINE]; // longest string

        max = 0;
        while ((len = get_line(line, MAXLINE)) > 0) {
                if (len > max) {
                        max = len;
                        strcpy(longest, line);
                }
        }

        if (max > 0)
                printf("longest: '%s'\n", longest);

        return 0;
}
