#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() 
{
    int a[ROWS][COLS], b[ROWS][COLS], sum[ROWS][COLS], diff[ROWS][COLS], product[ROWS][COLS];
    int i, j, k;

    // Taking input for matrix A
    printf("Enter elements for matrix A (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Taking input for matrix B
    printf("Enter elements for matrix B (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Addition of matrix A and B
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Subtraction of matrix B from A
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    
    // Multiplication of matrix A and B
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            product[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Displaying the sum, difference, and product matrices
    printf("Sum of matrices A and B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    printf("Difference of matrices A and B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    printf("Product of matrices A and B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
