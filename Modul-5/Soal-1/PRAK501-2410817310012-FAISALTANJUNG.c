#include <stdio.h>
//function
int MaxBilangan(int a, int b, int c, int d){
    int terbesar = a;
    if(b > terbesar){
        terbesar = b;
    }
    if(c > terbesar){
        terbesar = c;
    }
    if(d > terbesar){
        terbesar = d;
    }
    return terbesar;
}
int main() {
int a, b, c, d;

scanf("%d %d %d %d", &a, &b, &c, &d); 
int hasil = MaxBilangan(a, b, c, d); 
printf("%d", hasil);

return 0;
}
