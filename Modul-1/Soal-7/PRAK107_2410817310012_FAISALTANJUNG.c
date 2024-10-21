#include <stdio.h>
int main(){
    int sisi_1 = 4, sisi_2 = 5, sisi_3 = 7, harga = 85000;
    float biaya;
    float keliling;

    keliling =(float)sisi_1 + sisi_2 + sisi_3;
    biaya = (float) keliling * harga;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut - turut adalah %d, %d, dan %d\n", sisi_1, sisi_2, sisi_3);
    printf("Keliling tanah Pak Dengklek adalah %.f\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah %.f\n", biaya);
    return 0;
}