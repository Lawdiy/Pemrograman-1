#include <stdio.h>
int main(){
    int bilangan;
    printf(" ");
    scanf("%d", &bilangan);

    if(bilangan == 0){
        printf("Nol\n");
    }
    else if( bilangan >= 1 && bilangan < 10 ){
        printf("Satuan\n");
    }
    else if( bilangan >= 11 && bilangan < 20){
        printf("Belasan\n");
    }
    else if( bilangan ==10 || bilangan >=20 && bilangan < 100){
        printf("Puluhan\n");
    }
    else {
        printf("Anda menginput melebihi angka bilangan\n");
    }
}