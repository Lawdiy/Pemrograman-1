#include <stdio.h>
#include <math.h>
int main (){
    //alas = 5 cm, tinggi = 12 cm
    //luas = 1/2 x a x t = 5 x 6 = 30 cm2
    //keliling = a + b + c = 12 + b + 5
    //b2 = a2 + c2 = 144 + 25 = 169 = 13
    //keliling = 12 + 12 + 5 = 30 cm
    int alas = 5, tinggi = 12;

    float keliling, luas, sisi_miring;

    sisi_miring = sqrt(tinggi * tinggi + alas * alas);
    keliling = (float) tinggi + sisi_miring + alas;
    luas = (float) 1/2 * alas * tinggi;
  
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %.f cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %.f cm\n", keliling);
    printf("Luas = %.f cm\n", luas);

    return 0;
}