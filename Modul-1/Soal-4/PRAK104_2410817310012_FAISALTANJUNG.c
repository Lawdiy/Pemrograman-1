#include <stdio.h>
int main(){
    //Harga sepatu A adalah 400000,B 350000
    int a = 400000, b = 350000;
    float hasil_a;
    float hasil_b;
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);

    //Sepatu A mendapat diskon 13% sehingga harganya menjadi 348000
    //Sepatu B mendapat diskon 21% sehingga harganya menjadi 276500
    hasil_a =(float) a - (a * 13/100);
    hasil_b =(float) b - (b * 21/100);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n", hasil_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n", hasil_b);
    return 0;
}