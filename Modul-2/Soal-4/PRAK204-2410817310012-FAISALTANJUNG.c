#include<stdio.h>
#include <math.h>

#define pi 22/7

int main(){

    int jari_jari, tinggi;
    float keliling, luas, volume;

    printf(" ");
    scanf("%d %d", &jari_jari, &tinggi);
    
    volume =(float) 22 / 7 * (jari_jari * jari_jari) * tinggi;
    luas =(float) 2 * 22 / 7 * jari_jari * (jari_jari + tinggi);
    keliling =(float)2 * 22 / 7 * jari_jari;

    printf("Volume = %.2f \nLuas = %.2f \nKeliling = %.2f", volume, luas, keliling);
    return 0;
}