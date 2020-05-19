/*
 *  Removes comments from a c source file.
 */
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 512

bool strend(const char* s1, const char* s2);
void remove_comments(char* line);

int main(int argc, char** argv) // this is a main function.
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file.c>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!strend(argv[1], ".c") || strlen(argv[1]) <= 2) {  // '.c' name not allowed.
        fprintf(stderr, "Error: <file> must have a '.c' extension.\n");
        return EXIT_FAILURE;
    }

    FILE* file = fopen(argv[1], "r");
    if (!file) {
        perror("Error");
        return EXIT_FAILURE;
    }
    /*
        this should not
        show up
        if it does
        my code doesnt work :(
    */
    char line[MAXLINE];
    bool in_literal = false;
    bool in_comment = false;
    while (fgets(line, sizeof(line), file)) {
        for (int i = 0; line[i]; ++i) {
            if (in_comment) {
                line[i] = '\0';
                break;
            }
            if (line[i] == '"' || line[i] == '\'')
                in_literal = (!in_literal) ? true : false;

            if (line[i] == '/' && !in_literal) {
                if (line[i + 1] == '/') {
                    line[i] = '\0';
                    break;
                } else if (line[i + 1] == '*') {
                    line[i] = '\0';
                    in_comment = true;
                    break;
                }
            } else if (line[i] == '*' && !in_literal) {
                if (line[i + 1] == '/') {
                    in_comment = false;
                }
            }
        }
        printf("%s", line);
    }
    fclose(file);
    return EXIT_SUCCESS;
}

/* Returns true if s1 ends with s2. */
bool strend(const char* s1, const char* s2)
{
    size_t len1, len2;
    int i, j;

    len1 = strlen(s1);
    len2 = strlen(s2);

    for (i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0 && s2[j] == s1[i]; --i, --j)
        ;

    return j < 0;
}