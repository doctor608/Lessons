#include <stdio.h>
#include <string.h>

int main(void)
{
        char haystack[] = "#include <lol.h> // lol this is a comment";
        haystack_len = 50
        needle_len = 
        char needle[] = "//";

        char* needle_found;

        if ((needle_found = strstr(haystack, needle)) != NULL) {
                puts("Found");
                printf("%s\n", needle_found);
        } else
                puts("Not found");

        return 0;
}
