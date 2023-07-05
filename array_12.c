#include <stdio.h>

#define ROWS_A 3
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 3

void matrixAddition(int A[][COLS_A], int B[][COLS_B], int C[][COLS_A], int x, int y) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            C[i][j] = (x * A[i][j]) + (y * B[i][j]);
        }
    }
}

void displayMatrix(int matrix[][COLS_A], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROWS_A][COLS_A] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    int B[ROWS_B][COLS_B] = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};

    int C[ROWS_A][COLS_A];

    int X = 2;
    int Y = 3;

    matrixAddition(A, B, C, X, Y);

    printf("Matrix A:\n");
    displayMatrix(A, ROWS_A, COLS_A);

    printf("\nMatrix B:\n");
    displayMatrix(B, ROWS_B, COLS_B);

    printf("\nResultant matrix C:\n");
    displayMatrix(C, ROWS_A, COLS_A);

    return 0;
}
