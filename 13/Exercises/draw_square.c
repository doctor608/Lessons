#include <stdio.h>

void draw_square(int side, char symbol);

int main(void)
{
        int side;
        printf("Enter side: ");
        scanf("%d", &side);

        char symbol;
        printf("Enter symbol: ");
        scanf(" %c", &symbol);

        draw_square(side, symbol);

        return 0;
}

void draw_square(int side, char symbol)
{
        for (int i = 0; i < side; ++i) {
                for (int j = 0; j < side; ++j)
                        printf("%c", symbol);
                printf("\n");
        }
}
