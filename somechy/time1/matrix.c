#include <stdio.h>

void identifyMatrixType() {
    printf("Matrix Type Identifier\n");
    printf("Enter number of rows (m) and columns (n): ");
    
    int m, n;
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Invalid input!\n");
        return;
    }

    if (m <= 0 || n <= 0) {
        printf("Invalid dimensions! Rows and columns must be positive.\n");
        return;
    }

    if (m == 1 && n == 1) {
        printf("This is a 1x1 matrix (also a Square matrix and both Row & Column matrix).\n");
    }
    else if (m == 1) {
        printf("This is a Row Matrix (%d x %d).\n", m, n);
    }
    else if (n == 1) {
        printf("This is a Column Matrix (%d x %d).\n", m, n);
    }
    else if (m == n) {
        printf("This is a Square Matrix (%d x %d).\n", m, n);
    }
    else {
        printf("This is a Rectangular Matrix (%d x %d).\n", m, n);
    }
}

int main() {
    identifyMatrixType();
    return 0;
}
