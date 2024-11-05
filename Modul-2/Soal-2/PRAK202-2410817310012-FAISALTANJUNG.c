#include <stdio.h>
int main(){
    float angka1, angka2, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &angka1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &angka2);

    hasil = angka1 + angka2;

    printf("Hasil dari penjumlahan Nilai Pertama ");
if(angka1 == (int)angka1)
    printf("\"%d\" ", (int)angka1);
else
    printf("\"%.2f\" ", angka1);
    printf("dan nilai Kedua \"%.1f\" adalah \"%.2f\"\n", angka2, hasil);
    return 0;
}