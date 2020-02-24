#include <stdio.h>
#include <school.h>

int main(void)
{
        char text[256];

        size_t len = get_line(text, sizeof(text));

        printf("text: '%s'\nlen: %ld\n", text, len);

        return 0;
}
