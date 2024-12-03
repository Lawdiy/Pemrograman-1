#include <stdio.h>
int main() {
    int pilihan;
    float nilai1, nilai2, hasil;
    do {
        printf("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit \nMasukkan Pilihan :");
        scanf("%d", &pilihan);
        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama :");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua :");
            scanf("%f", &nilai2);
            switch (pilihan) {
                case 1:
                    hasil = nilai1 + nilai2;
                    printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                    break;
                case 2:
                    hasil = nilai1 - nilai2;
                    printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                    break;
                case 3:
                    hasil = nilai1 * nilai2;
                    printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                    break;
                case 4:
                    hasil = nilai1 / nilai2;
                     printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                    break;
            }
        } else if (pilihan == 5) {
            printf("Terima kasih, telah menggunakan kalkulator Faisal Tanjung\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (pilihan != 5);
    return 0;
}
