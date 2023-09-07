#include <unistd.h>
#include <stdbool.h>

bool is_valid(int board[4][4], int row, int col, int num) {
    // olha se a variável 'num' já está na mesma linha ou coluna
    // olha se é possível inserir o número num em uma determinada célula, da linha ou coluna
    for (int i = 0; i < 4; i++) {
        if (board[row][i] == num || board[i][col] == num) {
            //se o 'num' já estiver, retornar falso.
            return false; 
        }
    }

    // olha se 'num' é visível na direção da esquerda ->
    int left_count = 0;
    for (int i = col - 1; i >= 0; i--) {
        if (board[row][i] > num) {
            left_count++;
        }
        if (board[row][i] == num) {
            return false;
        }
    }
    if (left_count > board[row][col - 1]) {
        return false;
    }

    // olha se 'num' é visível na direção da direita <-
    int right_count = 0;
    for (int i = col + 1; i < 4; i++) {
        if (board[row][i] > num) {
            right_count++;
        }
        if (board[row][i] == num) {
            return false;
        }
    }
    if (right_count > board[row][col + 1]) {
        return false;
    }

    // olha se 'num' é visível na direção de cima 
    int up_count = 0;
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] > num) {
            up_count++;
        }
        if (board[i][col] == num) {
            return false;
        }
    }
    if (up_count > board[row - 1][col]) {
        return false;
    }

    // olha se 'num' é visível na direção de baixo ^
    int down_count = 0;
    for (int i = row + 1; i < 4; i++) {
        if (board[i][col] > num) {
            down_count++;
        }
        if (board[i][col] == num) {
            return false;
        }
    }
    if (down_count > board[row + 1][col]) {
        return false;
    }
    return true;
}

bool solve_skyscraper(int board[4][4], int row, int col) {
    // verifica se todas as linhas foram preenchidas, mostrando que ja foi resolvido.
    if (row == 4) {
        return true;
    }
    // calcula a próxima posição a ser verificada
    int next_row = col < 3 ? row : row + 1;
    int next_col = col < 3 ? col + 1 : 0;

    // se a célula já tiver preenchida, avance para a próxima célula
    if (board[row][col] != 0) {
        return solve_skyscraper(board, next_row, next_col);
    }

    // tenta preencher a célula atual com um número válido
    for (int num = 1; num <= 4; num++) {
        if (is_valid(board, row, col, num)) {
            board[row][col] = num; // Preenche a célula com o número válido
            if (solve_skyscraper(board, next_row, next_col)) {
                return true; // Se uma solução for encontrada, retorna verdadeiro
            }
            board[row][col] = 0; // Remove o número e tenta outra possibilidade
        }
    }

    return false;
}

void print_board(int board[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", board[i][j]);
        }
        write(1, "\n", 1);
    }
}

int main() {
    int initial_board[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    // Chama a função 'solve_skyscraper' pra resolver com o tabuleiro inicial
    if (solve_skyscraper(initial_board, 0, 0)) {
        // Se a solução for encontrada, imprime o tabuleiro resolvido.
        print_board(initial_board);
    } else {
        write(1, "Erro!", 5);
    }
    return 0;
}