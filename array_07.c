//Write a program to fill a square matrix with value 0 on the diagonals, 1 on the upper right triangle, and -1 on the lower left triangle.  
#include <stdio.h>

#define SIZE 4 // Change this value to modify the size of the matrix

void fillMatrix(int matrix[][SIZE]) {
    int i, j;

    // Fill the matrix with 0 on the diagonals, 1 on the upper right triangle, and -1 on the lower left triangle
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == j) {
                matrix[i][j] = 0; // Diagonal element
            } else if (i < j) {
                matrix[i][j] = 1; // Upper right triangle
            } else {
                matrix[i][j] = -1; // Lower left triangle
            }
        }
    }
}

void printMatrix(int matrix[][SIZE]) {
    int i, j;

    // Print the matrix
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];

    fillMatrix(matrix);
    printMatrix(matrix);

    return 0;
}
