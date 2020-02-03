#include <stdio.h>

void greet(char name[])
{
        printf("Hello, %s. How was your day?\n", name);
}

int main(void)
{
        char name[7] = "Artyom";
        greet(name);
        return 0;
}
