#include <stdio.h>
int main(){

    // a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y
    float a, b, i, j, x, y;
    float hasil;

    printf("");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil =(float) (((a - b) * i) / j) - (x + y);
    printf("%.3f", hasil);
    return 0;
}