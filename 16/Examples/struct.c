#include <stdio.h>
#include <school.h>

typedef struct {

        int row;
        int column;

} Position;

typedef int Integer;

int main(void)
{
        Integer x = 2, y = 3;
        Position user_pos = { x, y };
        printf("user_pos = %d %d\n", user_pos.row, user_pos.column);

        return 0;
}
