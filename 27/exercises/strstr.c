#include <stdio.h>
#include <stdlib.h>

char* strstr_(const char* haystack, const char* needle);
char* StrStr(const char* haystack, const char* needle);

int main(int argc, char* argv[])
{
        if (argc != 3) {
                fprintf(stderr, "Usage: strstr <haystack> <needle>\n");
                return EXIT_FAILURE;
        }

        char* needle = StrStr(argv[1], argv[2]);

        if (needle)
                printf("Found needle: %s\n", needle);
        else
                printf("Not found needle\n");

        return EXIT_SUCCESS;
}

char* StrStr(const char* haystack, const char* needle)
{
        int i, j, k;

        for (i = 0; haystack[i] != '\0'; ++i) {
                for (j = i, k = 0; needle[k] != '\0' &&
                                haystack[j] == needle[k]; ++j, ++k);
                if (needle[k] == '\0')
                        return haystack + i;
        }
        return NULL;
}

// banananana bananak
char* strstr_(const char* haystack, const char* needle)
{
        while (*haystack) {
                char* begin = haystack;

                while (*haystack && *needle && *haystack == *needle) {
                        ++haystack;
                        ++needle;
                }
                // If comlete match
                if (!*needle)
                        return begin;

                haystack = begin + 1;
        }
        return NULL;
}
