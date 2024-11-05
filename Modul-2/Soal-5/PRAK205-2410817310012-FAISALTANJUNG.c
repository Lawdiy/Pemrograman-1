#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    float c, tinggi, keliling, luas;
    printf("");
    scanf("%d %d", &a, &b );

    c = ((b * b) - (a * a));
    double alas=sqrt (c);
    tinggi = a;
    keliling = a + b + alas;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.0f cm \nTinggi = %.0f cm \nKeliling = %.0f cm \nLuas = %.0f cm^2", alas, tinggi, keliling, luas);
    return 0;
}