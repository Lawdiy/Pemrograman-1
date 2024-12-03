#include <stdio.h>
int main() {
    int n, kelipatan, total = 0;

    printf("");
    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        int jumlah = 0;
        for (int j = 1; j <= i; j++) {
            jumlah += j * kelipatan;
        }

        printf("(");
        for (int j = 1; j <= i; j++) {
            printf("%d * %d", j, kelipatan);
            if (j < i) printf(" + ");
        }
        printf(") = %d\n", jumlah);

        total += jumlah;
    }

    printf("%d\n", total);
    return 0;
}
