#include <stdio.h>

typedef enum {
    None = ' ',
    Rook_w = 'r',
    Knight_w = 'n',
    Bishop_w = 'b',
    Queen_w = 'q',
    King_w = 'k',
    Pawn_w = 'p',
    Rook_b = 'R',
    Knight_b = 'N',
    Bishop_b = 'B',
    Queen_b = 'Q',
    King_b = 'K',
    Pawn_b = 'P'
} Piece;

typedef struct {
    Piece board[8][8];
} Board;

void Chess_Board(Board* cb)
{
    int i, j;
    cb->board[0][0] = Rook_b;
    cb->board[0][1] = Knight_b;
    cb->board[0][2] = Bishop_b;
    cb->board[0][3] = Queen_b;
    cb->board[0][4] = King_b;
    cb->board[0][5] = Bishop_b;
    cb->board[0][6] = Knight_b;
    cb->board[0][7] = Rook_b;
    for (i = 0; i <= 8; ++i) {
        cb->board[1][i] = Pawn_b;
        cb->board[6][i] = Pawn_w;
    }
    for (i = 2; i <= 5; ++i) {
        for (j = 0; j < 8; ++j) {
            cb->board[i][j] = None;
        }
    }
    cb->board[7][0] = Rook_w;
    cb->board[7][1] = Knight_w;
    cb->board[7][2] = Bishop_w;
    cb->board[7][3] = Queen_w;
    cb->board[7][4] = King_w;
    cb->board[7][5] = Bishop_w;
    cb->board[7][6] = Knight_w;
    cb->board[7][7] = Rook_w;
}

void Print_Board(Board* cb)
{
    int i, j;
    for (i = 7; i >= 0; --i) {
        printf("%d", i + 1);
        for (j = 0; j < 8; ++j) {
            printf(" %c", cb->board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}

int main()
{
    Board Board;
    Chess_Board(&Board);
    Print_Board(&Board);
    return 0;
}