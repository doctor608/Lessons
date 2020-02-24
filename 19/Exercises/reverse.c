#include <stdio.h>
#include <school.h>

#define MAX_SIZE 1024

int main(void)
{
        int len;
        char string[MAX_SIZE];

        while ((len = get_line(string, MAX_SIZE)) > 0) {
                for (int i = len - 1; i >= 0; --i)
                        printf("%c", string[i]);
                puts("");
        }

        return 0;
}
