#include <stdio.h>
#define pi 3.14
int main(){
    int putaran = 5, jarak = 14;
    float keliling;
    float jari_jari;

    keliling = (float) jarak / putaran;
    jari_jari = (float) keliling / (2* pi);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",jari_jari);

    return 0;
}