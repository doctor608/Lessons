/*   side = 3

  *                  draw_start  spaces before = 2; spaces between = 0; spaces all = 4; stars = 1;
 * *                 draw_start  spaces before = 1; spaces between = 1; spaces all = 3; stars = 2;
*   *                draw_mid    spaces before = 0; spaces between = 3; spaces all = 3; stars = 2;
 * *                 draw_end    spaces before = 1; spaces between = 1; spaces all = 3; stars = 2;
  *                  draw_end    spaces before = 2; spaces between = 0; spaces all = 4; stars = 1;

*/
#include <stdio.h>
#include <string.h>

void draw_romb(size_t side);

int main(void)
{
    int side;

    printf("Enter side\n");
    scanf("%d", &side);
    
    draw_romb(side);

    return 0;
}

void draw_romb_begin(size_t side)
{
    unsigned int spaces_before = side - 1;
    int spaces_between = 0;
    int stars = 1;

    for (unsigned int i = 0; i < side; ++i) {
        for (unsigned int j = 0; j < spaces_before; ++j) {
            putchar(' ');
        }
            if (stars < 2) {
                ++stars;
                --spaces_before;
                ++spaces_between;
                putchar('*');
                putchar('\n');
            }
            else {
                putchar('*');
                for (int k = 0; k < spaces_between; ++k) {
                    putchar(' ');
                }
                putchar('*');
                putchar('\n');
                --spaces_before;
                spaces_between = spaces_between + 2;
            }
    }

    ++spaces_before;
    spaces_between = spaces_between - 2;

    for (unsigned int i = 0; i <= side - 1; ++i) {
        for (unsigned int j = 0; j < spaces_before; ++j) {
            putchar(' ');
        }
            if (spaces_before == side - 1) {
                putchar('*');
                putchar('\n');
                break;
            }
            else {
                putchar('*');
                for (int k = 0; k < spaces_between; ++k) {
                    putchar(' ');
                }
                putchar('*');
                putchar('\n');
                ++spaces_before;
                spaces_between = spaces_between - 2;
            }

    }
}