#include <stdio.h>
#include <school.h>

int main(void)
{
        int darray[3][3] = {
                        {0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0}
                                };

        for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                        printf("%d ", darray[i][j]);
                }
                printf("\n");
        }

        return 0;
}
