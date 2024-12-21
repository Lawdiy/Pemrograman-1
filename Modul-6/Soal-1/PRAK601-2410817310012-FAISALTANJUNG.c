#include <stdio.h>
void main(){
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int Matriks[baris][kolom];

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &Matriks[i][j]);
        }
    }
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", Matriks[i][j]);
        }
        printf("\n");
    }
}