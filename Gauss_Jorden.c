#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void gaussJordan(float a[SIZE][SIZE], int n) {
    int i, j, k;
    float ratio;

    for (i = 1; i <= n; i++) {
        float pivot = a[i][i];
        for (j = 1; j <= n + 1; j++) {
            a[i][j] /= pivot;
        }

        for (j = 1; j <= n; j++) {
            if (i != j) {
                ratio = a[j][i];
                for (k = 1; k <= n + 1; k++) {
                    a[j][k] -= ratio * a[i][k];
                }
            }
        }
    }
}

int main() {
    printf("Mayank Singh / 230111954 / 35 / I1\n");
    float a[SIZE][SIZE];
    int n, i, j;

    printf("Enter number of unknowns: ");
    scanf("%d", &n);

    printf("Enter coefficients of the Augmented Matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }    
    }

    gaussJordan(a, n);

    printf("\nSolution:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d] = %0.3f\n", i, a[i][n + 1]);
    }

    return 0;
}
