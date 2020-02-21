#include <stdio.h>
#include <school.h>
#include <string.h>

int main(void)
{
        char string1[128];
        char string2[128];

        printf("Enter a first string: ");
        fgets(string1, sizeof(string1), stdin);

        printf("Enter a second string: ");
        fgets(string2, sizeof(string2), stdin);

        int len1 = strlen(string1);
        int len2 = strlen(string2);

        if (string1[len1 - 1] == '\n') {
                string1[len1 - 1] = '\0';
                --len1;
        }

        if (string2[len2 - 1] == '\n') {
                string2[len2 - 1] = '\0';
                --len2;
        }

//        if (len1 != len2) {
//                puts("Not same");
//                return 0;
//        }
////
//        for (int i = 0; i < len1; ++i) {
//                if (string1[i] != string2[i]) {
//                        puts("Not same");
//                        return 0;
//                }
//        }
        if (strcmp(string1, string2) == 0)
                puts("Same");
        else
                puts("Not same");

        return 0;
}
