#include <stdio.h>
int main(){
    int x = 5, y = 7, z = 9;
    float hasil;

    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bermilai %d\n", y);
    printf("Variabel z bernilai %d\n", z);

    hasil = (float)(x + y) + z;
    printf("Jumlah variabel tersebut adalah %.f\n", hasil);
    return 0;
}