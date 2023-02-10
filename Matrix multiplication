#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE];
    int c[MAX_SIZE][MAX_SIZE];
    int m, n, p, q, i, j, k;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrices with entered dimensions can't be multiplied with each other.\n");
        return 0;
    }

    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
