#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
#define EMPTY_CELL '*'

typedef struct {

        int row;
        int col;

} Position;

void init_board(char board[][COLS], char default_);
void draw_board(char board[][COLS]);

Position get_position(const char prompt[]);

int main(void)
{
        char board[ROWS][COLS];

        init_board(board, EMPTY_CELL);
        draw_board(board);

        Position x_pos = get_position("Enter position: ");
        printf("Your position is row - %d col - %d\n", x_pos.row, x_pos.col);

        return 0;
}



/*
 * Initializes the board. Fills all the cells with 'default_' char.
 */
void init_board(char board[][COLS], char default_)
{
        for (int row = 0; row < ROWS; ++row) {
                for (int col = 0; col < COLS; ++col) {
                        board[row][col] = default_;
                }
        }
}

/*
 * Prints the board to the stdout.
 */
void draw_board(char board[][COLS])
{
        for (int row = 0; row < ROWS; ++row) {
                for (int col = 0; col < COLS; ++col) {
                        printf("%c ", board[row][col]);
                }
                puts("");
        }
}

/*
 * Gets position (row, col) from user.
 */
Position get_position(const char prompt[])
{
        Position user_pos;

        printf("%s", prompt);
        if (scanf("%d %d", &user_pos.row, &user_pos.col) != 2) {
                fprintf(stderr, "Error: invalid position, please try again\n");
                exit(1);
        }

        return user_pos;
}
