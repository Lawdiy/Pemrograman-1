#include <stdio.h>
int main(){
    //Variabel a bernilai 9, b bernilai 5, x bernilai 8, y bernilai 8
    int a = 9, b = 5, x = 8, y = 8;
    float hasil;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    //total sisa bagi dari a dibagi b dan x dibagi y adalah 4
    hasil = (float) (a % b) + (x % y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %.f", hasil);
    return 0;
}