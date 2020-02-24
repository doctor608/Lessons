#include <stdio.h>
#include <school.h>

#define MIN_LEN 10

int main(void)
{
        int len;
        char string[1024];

        while ((len = get_line(string, 1024)) > 0 ) {
                if (len > MIN_LEN)
                        printf("%s\n", string);
        }
        return 0;
}
