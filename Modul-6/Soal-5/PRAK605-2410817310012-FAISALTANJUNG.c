#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int A[n][n], B[n][n], AXB[n][n];

    printf("matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            AXB[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                AXB[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matriks AXB:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", AXB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
