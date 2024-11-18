#include <stdio.h>
int main (){
    int bilangan;

    printf("");
    scanf("%d", &bilangan);

    if(bilangan == 0){
        printf("nol\n");
    }
    else if(bilangan > 0){
        printf("positif\n");
    }
    else if (bilangan < 0){
        printf("negatif\n");
    }
}